#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j,Size;
    cin >> m >> n;
    for(j=m;j<m+n;j++)
    {
        if(j%n == 0)
        {
            Size = j;
            break;
        }
    }
    int* a = new int[Size];
    for(i=0;i<Size;i++)
    {
        a[i] = 0;
    }
    for(i=0;i<m;i++)
    {
        cin >> a[i];
    }
    int max=0;
    for(i=0;i<Size;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    
    return 0;
}