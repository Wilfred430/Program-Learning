#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

void show_frame(char (&dot)[6][7]);
void initialize(char (&dot)[6][7]);
void refresh(char (&arrow)[7]);
void player1(char (&arrow)[7],char (&dot)[6][7]);
void player2(char (&arrow)[7],char (&dot)[6][7]);

int main() 
{ 
	char dot[6][7]={'0'};
    initialize(dot);
    char arrow[7];
    while(1){
    	player1(arrow,dot);
		system ("cls"); 
    	player2(arrow,dot);
    	system ("cls"); 
	}
    show_frame(dot);
    
    return 0;
}

void show_frame(char (&dot)[6][7])
{
    int i,j,time=1;

    for(i=1;i<=17;i++)
    {
        if(i%3 == 1)
        {
            cout << "   |";
            for(j=0;j<7;j++)
            {
                cout << "       |";
            }
            cout << endl;
        }else if(i%3 == 2)
        {
            cout << "  " << time <<"|";
            for(j=0;j<7;j++)
            {
                cout << "   "<<dot[(i-2)/3][j]<<"   |";
            }
            time++;
            cout << endl;
        }else if(i%3 == 0)
        {
            cout << "   |";
            for(j=0;j<7;j++)
            {
                cout << ".......|";
            }
            cout << endl;
        }
    }
    cout << "   ";
    for(i=0;i<7;i++)
    {
        cout << "|_______";
    }
    cout << "|" << endl;
    cout << "       1";
    for(i=2;i<8;i++)
    {
        cout << setw(8) << i;
    }
    cout << endl;
    return;
}
void initialize(char (&dot)[6][7]){
    for(int i=0;i<6;i++){
        for(int j=0;j<7;j++){
            dot[i][j]='0';
        }
    }
}
void refresh(char (&arrow)[7]){
    for(int i=0;i<7;i++){
            arrow[i]=' ';
    }
}
void player1(char (&arrow)[7],char (&dot)[6][7]){ 
	    arrow[0]='V'; 
		cout<<"Round Player1:"<<endl; 
    	cout<<setw(8)<<arrow[0]<<endl; 
        show_frame(dot);
  		bool fault=false; 
	    int k=0;
	    char c=33;
	while(c!=32){
    	refresh(arrow);
    	c=getch();
    	if(c==32)
    	break;
 		fault=false; 
	    switch(c){
	        case 65:case 97://左 
	        	if(k!=0) 
	            	k--;
	            else
					k=6; 
	            break;
	        case 68:case 100://右 
	        	if(k!=6) 
	            	k++;
	            else
					k=0; 
	            break;
	        default:
			fault=true; 
	    }       
        system ("cls"); 
    	arrow[k]='V';
		cout<<"Round Player1:"<<endl; 
    	for(int i=0;i<7;i++)
        	cout << setw(8) << arrow[i];
    	cout << endl;
    	show_frame(dot);
        if(fault){
        Sleep(1);
		cout<<endl<<"    《 Please only press left or right 》"; }
    }
	
}

void player2(char (&arrow)[7],char (&dot)[6][7]){
	    arrow[0]='V'; 
	    cout<<"Round Player2:"<<endl; 
    	cout<<setw(8)<<arrow[0]<<endl; 
        show_frame(dot);
  		bool fault=false; 
	    int k=0;
	    char c=31;
	while(c!=32){
    	refresh(arrow);
    	c=getch();
    	if(c==32)
    		break;
    	fault=false; 
	    switch(c){
	        case 75: 
	        	if(k!=0) 
	            	k--;
	            else
					k=6; 
	            break;
	        case 77: 
	        	if(k!=6) 
	            	k++;
	            else
					k=0; 
	            break;
	        default:
			fault=true; 
	    } 
	    system ("cls");     
    	arrow[k]='V';
    	cout<<"Round Player2:"<<endl; 
    	for(int i=0;i<7;i++)
        	cout << setw(8) << arrow[i];
    	cout << endl;
    	show_frame(dot);
    	if(fault){
    	Sleep(1);//若沒延遲會有bug 
		cout<<endl<<"    《 Please only press left or right 》"; }
		} 
	
}

