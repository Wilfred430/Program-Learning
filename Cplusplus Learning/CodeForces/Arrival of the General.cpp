#include<iostream>
using namespace std;

int main()
{
    int N,i,Max = -1, Min = 101,Numax,Numin;
    cin >> N;
    int* a = new int[N];
    for(i=0;i<N;i++)
    {
        cin >> a[i];
        if(a[i] > Max)
        {
            Max = a[i];
            Numax = i;
        }
        if(a[i] <= Min)
        {
            Min = a[i];
            Numin = i;
        }
    }
    if(Numin > Numax)
    {
        cout << (N-1)-Numin + Numax << endl;
    }else
    {
        cout << (N-1)-Numin + Numax -1 << endl;
    }

    return 0;
}