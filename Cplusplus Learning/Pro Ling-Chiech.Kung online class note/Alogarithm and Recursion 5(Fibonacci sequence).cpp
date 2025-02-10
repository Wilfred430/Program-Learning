#include<iostream>
using namespace std;

int Fibonacci(int n);

int main()
{
    int n,Val;
    cout << "Please enter number n to calculate: ";
    cin >> n;
    Val = Fibonacci(n);
    cout << "This is circumstance: " << Val << endl;

    return 0;
}

int Fibonacci(int n)
{
    if(n == 1)
    {
        return 1; 
    }else if(n == 2)
    {
        return 1;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}