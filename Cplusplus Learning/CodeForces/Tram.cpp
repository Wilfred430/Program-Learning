#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N,i,sum=0,MAX=0;
    cin >> N;
    int* a = new int[N];
    int* b = new int[N];
    for(i=0;i<N;i++)
    {
        cin >> a[i] >> b[i];
        sum = sum - a[i] + b[i];
        if(sum > MAX)
        {
            MAX = sum;
        }
    }
    cout << MAX << endl;

    delete [] a;
    delete [] b;

    return 0;
}