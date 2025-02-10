#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Kickoutprime(int i, bool isPrime[], int n);

int main() 
{
    int i,n;

    cin >> n;

    bool* isPrime = new bool[n+1];

    for(i=0;i<n;i++)
    {
        isPrime[i] = true;
    }
    for(i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout << i << " ";
            Kickoutprime(i,isPrime,n);
        }
    }

    return 0;

}

void Kickoutprime(int i,bool isPrime[],int n)
{
    int j;
    for(j=1;i*j<n;j++)
    {
        isPrime[i*j] = false;
    }
}