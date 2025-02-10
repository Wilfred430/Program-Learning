#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    int i,tmp,j,count=0,len=0,countnum=0;
    while(1)
    {
        cout << "input:" << endl;getline(cin,s);
        if(s == "-1")
        {
            break;
        }
        cout << "Output:" << endl;
        tmp=s.length();
        char a[tmp]={' '};
        for(i=0;i<tmp;i++)
        {
            a[i]=s[i];
        }
        for(i=0;a[i] != '.';i++)
        {
            len++;
        }
        for(i=0;i<len;i++)
        {
            count++;
            if(a[i]-'0'<=9 && a[i]-'0'>=0)
            {
                countnum++;
            }
            if(a[i] == ' ' || a[i] == '\0')
            {
                if(countnum == (count-1))
                {
                    for(int k=i-countnum;k<i;k++)
                    {
                        a[k] = 'x';
                    }
                }
                countnum = 0;
                count = 0;
            }
        }
        for(i=0;i<tmp;i++)
        {
            cout << a[i];
        }
        cout << endl << endl;
    }
}