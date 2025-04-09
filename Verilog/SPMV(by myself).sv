module SPMV(
    clk, 
	rst_n, 
	// input 
	in_valid, 
	weight_valid, 
	in_row, 
	in_col, 
	in_data, 
	// output
	out_valid, 
	out_row, 
	out_data, 
	out_finish
);

//---------------------------------------------------------------------
//   INPUT AND OUTPUT DECLARATION                         
//---------------------------------------------------------------------
input clk, rst_n; 
// input
input in_valid, weight_valid; 
input [4:0] in_row, in_col; 
input [7:0] in_data; 
// output 
output logic out_valid; 
output logic [4:0] out_row; 
output logic [20:0] out_data; 
output logic out_finish; 
//---------------------------------------------------------------------
//   LOGIC DECLARATION
//---------------------------------------------------------------------
logic [7:0] vector_in [0:31];
logic [17:0] result [0:31];
logic [5:0] i;
logic [4:0] next;
logic pre_lead;
//---------------------------------------------------------------------
//   Your design                        
//---------------------------------------------------------------------
always_ff @(posedge clk,negedge rst_n)
begin
	if(!rst_n)
	begin
		out_valid <= 0;
        out_finish <= 0;
        out_row <= 5'b0;
        out_data <= 21'b0;
		next<=0;
		pre_lead<=0;
		for (i = 0; i < 32; i = i + 1)
        begin
            result[i] <= 18'b0;
            vector_in[i] <= 8'b0;
        end
	end
	else if(in_valid)
	begin
		vector_in[in_row] <= in_data;
	end
	else if(weight_valid)
	begin
		result[in_row] <= result[in_row] + in_data * vector_in[in_col];
		pre_lead<=1;
	end
	else if(out_finish)
	begin
		out_valid <= 0;
        out_finish <= 0;
        out_row <= 5'b0;
        out_data <= 21'b0;
		next<=0;
		pre_lead<=0;
		for (i = 0; i < 32; i = i + 1)
        begin
            result[i] <= 18'b0;
            vector_in[i] <= 8'b0;
        end
	end
	else if(pre_lead && !weight_valid)
	begin
		if(next==31)
		begin
			out_finish<=1;
			out_data<=result[next];
			out_row<=next;
		end
		else
		begin
			out_valid<=1;
			out_data<=result[next];
			out_row<=next;
			next<=next+1;
		end
	end else begin end
end


endmodule
