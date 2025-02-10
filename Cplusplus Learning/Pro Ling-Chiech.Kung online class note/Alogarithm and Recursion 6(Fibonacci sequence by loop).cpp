#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, i;
    cout << "Please enter the number you want to calculate: ";
    cin >> n;
    int* Fib = new int[n+1];
    for(i=0;i<n+1;i++)
    {
        Fib[i] = 0;
    }
    Fib[0] = 0, Fib[1] = 1;
    for(i=2;i <= n;i++)
    {
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    cout << "The result is " << Fib[n] << endl;

    return 0;
}