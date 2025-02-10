#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>

using namespace std;

void calculate_sd(double x[],int N);

int main()
{
	int N,i;
	ifstream inStream; 
	inStream.open("input1.txt");  /*C:\\C++ website forth\\ProChen_homework\\*/	
	if(inStream.fail())
	{
		cout << "No!";
		exit(1);
	}
	
	while(1)
	{
		inStream >> N;
        double x[N];
		if(N == 0)
		{
			break;
		}
		for(i=0;i<=(N-1);i++)
		{
			inStream >> x[i];
		}
		calculate_sd(x,N);
	}
	
	inStream.close();
	return 0;
} 

void calculate_sd(double x[],int N)
{
	int i;
	double Average,Sum=0,S;
	for(i=0;i<=(N-1);i++)
	{
		Sum=Sum+x[i];
	}
	Average=Sum/N;
	Sum=0;
	for(i=0;i<=(N-1);i++)
	{
		Sum = Sum + pow((x[i]-Average),2);
	}
	S=sqrt(Sum/N);
	cout << fixed << setprecision(2) << S << endl;
	
	return ; 
}