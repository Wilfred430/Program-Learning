#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,j,CountDifferent = 0;
    string a;
    cin >> a;
    for(i=0;i<a.length();i++)
    {
        if(i==0)
        {
            CountDifferent++;
        }else
        {
            bool Different = true;
            for(j=0;j<i;j++)
            {
                if(a[i] == a[j])
                {
                    Different = false;
                }
            }
            if(Different)
            {
                CountDifferent++;
            }
        }
    }
    if(CountDifferent % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}