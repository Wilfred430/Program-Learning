#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N,i;
    cin >> N;
    int* a = new int[N];
    for(i=0;i<N;i++)
    {
        cin >> a[i];
    }
    int Max = a[0],Min = a[0];
    int amazingPerformance=0;
    for(i=1;i<N;i++)
    {
        if(a[i]>Max)
        {
            amazingPerformance++;
            Max = a[i];
        }
        if(a[i]<Min)
        {
            amazingPerformance++;
            Min = a[i];
        }
    }
    cout << amazingPerformance << endl;

    return 0;
}