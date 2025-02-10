#include<iostream>
#include<string> 
#include<fstream>
#include<vector>
#include<cmath> 

using namespace std;

vector<string> split(string target, string delimiter);

int main()
{
	ifstream Ins;
	ofstream Out;
	string target,delimiter;
	int i,time=0,j,len=0,k=0;
	vector<string> s;
	Ins.open("input1.txt");
	Out.open("output1.txt");
	
	getline(Ins,target);
	Ins >> delimiter;
    s = split(target,delimiter);
	for(i=0;i<s.size();i++)
	{
		if(s[i] == " ")
		{
			time++;
		}
	}
	for(i=0;i<=time;i++)
	{
		Out << i << " : ";
		for(j=k;j < s.size();j++)
		{
			if(s[j] == " ")
			{
				Out << endl;
				break;
			}
			Out << s[j];
			len++;
		}
		k = k + len + 1;
		len=0;
	}
	
	Out.close();
	Ins.close();
	return 0;
}

vector<string> split(string target, string delimiter)
{
	int i;
	vector<string> sum;
	string a;
	
	for(i=0;i<target.length();i++)
	{
		if(target[i] == delimiter[0])
		{
			sum.push_back(" ");
			continue;
		}
		a = target[i];
		sum.push_back(a);
	}
	return sum;
}