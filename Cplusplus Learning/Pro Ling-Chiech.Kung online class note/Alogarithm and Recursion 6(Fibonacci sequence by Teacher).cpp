#include<iostream>
using namespace std;

double fibbRepetitive(int n);

int main()
{
    int n;
    cout << "Please enter the number you want to calculate: ";
    cin >> n;
    cout << "The result is " << fibbRepetitive(n) << endl;

    return 0;
}

double fibbRepetitive(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    int fib1 = 1, fib2 = 1, fib3 = 2;
    for(int i=2;i<n;i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    return fib3;
}