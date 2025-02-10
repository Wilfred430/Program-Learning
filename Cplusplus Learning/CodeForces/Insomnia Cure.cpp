#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int K,L,M,N,D,i,count=0;
    cin >> K >> L >> M >> N >> D;
    int* a = new int[D+1];
    for(i=0;i<=D;i++)
    {
        a[i] = 1;
    }
    for(i=1;i<=D;i++)
    {
        if(i%K == 0)
        {
            a[i] = 0;
        }else if(i%L==0)
        {
            a[i] = 0;
        }else if(i%M == 0)
        {
            a[i] =0;
        }else if(i%N==0)
        {
            a[i]=0;
        }
    }
    for(i=0;i<=D;i++)
    {
        if(a[i] ==0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}