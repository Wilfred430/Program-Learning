#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

 int main(int argc, char** argv)
 {
 	string s;
 	int num=0,i;
 	double SoftRate, HardRate;
 	ifstream in;
 	in.open(argv[1]);
 	in >> SoftRate >> HardRate;
	while(getline(in, s))
	{
		num++;
	}
 	in.close();
 	double** a = new double*[num];
 	for(i=0;i<num;i++)
	{
	 	a[i] = new double[3];
	}
	for(i=0;i<num;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j] = 0;
		}
	}
 	in.open(argv[1]);
 	ofstream out;
 	out.open(argv[2]);
 	in >> SoftRate;
	in >> HardRate;
 	s[9]=0;
 	while(getline(in, s))
	{
		int t = int(s[1]) - 48;
		a[t][0] = (int(s[3]) - 48)*10 + (int(s[4] - 48));
		a[t][1] = (int(s[6]) - 48)*10 + (int(s[7] - 48));
		a[t][2] = (int(s[9]) - 0);
		s[9] = 0;
	}
	int j;
	for(i=1;i<num;i++)
	{
		int area = a[i][0]*a[i][1];
		if(a[i][2] == 83)
		{
			out << "b" << i;
			for(j=1;j<area;j++)
			{
				if(area % j == 0)
				{
					if((SoftRate <= (j*j)/double(area) && (HardRate >= (j*j)/double(area))))
					{
						out << " {" << j << "," << area/j << "}";
					}
				}
				
			}
			out << endl;
		}else
		{
			out << "b" << i;
			if(a[i][0] > a[i][1])
			{
				out << "b" << i;
				out << " {" << a[i][1] << "," << a[i][0] << "}";
				out << " {" << a[i][0] << "," << a[i][1] << "}";
			}else if(a[i][0] < a[i][1])
			{
				out << " {" << a[i][0] << "," << a[i][1] << "}";
				out << " {" << a[i][1] << "," << a[i][0] << "}";
			}else
			{
				out << " {" << a[i][0] << "," << a[i][1] << "}";
			}
			out << endl;
		}
	}
	in.close();
	out.close();
	return 0;
 } 
 
 //in.open(argv[1]);