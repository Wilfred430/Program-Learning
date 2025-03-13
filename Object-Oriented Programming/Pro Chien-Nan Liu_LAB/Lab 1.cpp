#include<iostream>
using namespace std;

int main()
{
    int N,i;
    cin >> N;
    for(i=1;i*i<=N;i++)
    {
        if(N%i == 0)
        {
            cout << i << " " << (N/i) << endl;
        }
    }

    return 0;
}