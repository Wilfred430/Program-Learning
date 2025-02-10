#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,i,j;
    int xi=0,yi=0,zi=0;
    cin >> n;
    int** a = new int*[n];
    for(i=0;i<n;i++)
    {
        a[i] = new int[3];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin >> a[i][j];
            if(j==0)
            {
                xi = xi + a[i][j];
            }else if(j==1)
            {
                yi = yi + a[i][j];
            }else
            {
                zi = zi + a[i][j];
            }
        }
    }
    if((xi == 0 && yi == 0)&& zi == 0)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    for(i=0;i<n;i++)
    {
        delete [] a[i];
    }
    delete [] a;

    return 0;

}