#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int i=0,j,h;
	string s;
	
	while(1)
	{
		cout << "Please enter a string : ";
		cin>>s;
		h=s.length();
		char  a[h]={'\0'},num[h]={'\0'},Char[h]={'\0'},tmp;
		int value=1,Num=0,Calculate_num=0,time=0,sum=0,DE[100],Sum=0;
		if(s == "0")
		{
			break;
		}
		for(i=0;i<h;i++)
		{
			a[i] = s[i];
		}
		for(i=0;i<h;i++)
		{
			if((a[i] - '0') <= 9 && (a[i] - '0') >= 0)
			{
				num[i] = a[i];
                Calculate_num++;
			}else
			{
				Char[i] = a[i];
			}
		}
        int P[Calculate_num-1]={0};
		for(j=0;j<h-1;j++)
		{
			for(i=0;i<h-1;i++)
			{
				if(Char[i] > Char[i+1])
				{
					tmp = Char[i];
					Char[i]=Char[i+1];
					Char[i+1]=tmp;
				}
			}
		}
        for(i=0;i<h;i++)
		{
			if(Char[i]== '\0')
            {
                Num++;
            }else
            {
                break;
            }
		}
        cout << endl;
        if(Calculate_num == h)
        {
           cout << "all numbers" << endl;
        }else
        {
            for(i=Num;i<h;i++)
            {
                if(Char[i] == Char[i+1])
                {
                    value++; 
                    continue;
                }
                cout << Char[i] << " : " << value <<endl;	
                value=1;
            } 
        }
        for(i=0;i<h;i++)
        {
            if(num[i] - '0' >= 0)
            {
                P[time] = num[i] - '0';
                time++;
            }
        }
        for(i=0;i<time;i++)
        {
            sum = sum + P[i] * pow(10,time-i-1);
        }
        cout << "In the range from 10 to " << sum << endl;
        for(i=153;i <= sum;i++)
        {
            time=0;
            int DE[100]={0};
            int f=i;
            while(1)
            {
                if(f > 0)
                {
                    DE[time] = f%10;
                    f=f/10;
                    time++;
                }else
                {
                    break;
                }
            }
            for(j=0;j<time;j++)
            {
                Sum = Sum + pow(DE[j],time);
                if(Sum == i && j == time - 1)
                {
                    cout << i << endl;
                }else if(Sum > i)
                {
                    break;
                }
            }
            Sum=0;
        }
	}		
	return 0;
}