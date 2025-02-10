#include<iostream>
using namespace std;

int main()
{
    int a[4] = {0},i,j,CountDifferent = 0;
    for(i=0;i<4;i++)
    {
        cin >> a[i];
        if(i == 0)
        {
            CountDifferent++;
        }else
        {
            bool Different = true;
            for(j=0;j<i;j++)
            {
                if(a[j] == a[i])
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
    cout << 4 - CountDifferent << endl;
    return 0;
}