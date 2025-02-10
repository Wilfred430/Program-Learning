#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,t,i,j,k;
    cin >> n >> t;
    char* a = new char[n];
    char tmp;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(j=0;j<t;j++)
    {
        for(i=n-1;i>=0;i--)
        {
            if(a[i] == 'B' && (i == n-1))
            {
                continue;
            }else if(i != n-1)
            {
                if(a[i] == 'B' && a[i+1] == 'G')
                {
                    tmp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = tmp;
                    i--;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}