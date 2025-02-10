#include<iostream>
using namespace std;

int main()
{
    int a[5][5];
    int b[3][3];
    int i,j;
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            a[i][j] = 0;
        }
    }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            cin >> a[i][j];
        }
    }
    for(j=1;j<4;j++)
    {
        for(i=1;i<4;i++)
        {
            if((a[i][j] + a[i-1][j] + a[i][j-1] + a[i+1][j] + a[i][j+1])%2 == 0)
            {
                b[i-1][j-1] = 1;
            }else
            {
                b[i-1][j-1] = 0;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}