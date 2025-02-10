#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a[5][5], i, j,tx,ty;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                tx = i;
                ty = j;
            }
        }
    }
    cout << sqrt((tx-2)*(tx-2)) + sqrt((ty-2)*(ty-2)) << endl;

    return 0;
}