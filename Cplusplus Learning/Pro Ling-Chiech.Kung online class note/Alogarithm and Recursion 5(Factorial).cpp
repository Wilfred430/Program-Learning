#include<iostream>
using namespace std;

int Factorial(int n);

int main()
{
    int n,Result;
    cout << "Please enter a number that you want to calculate n!: " ;
    cin >> n;
    Result = Factorial(n);
    cout << "The value of n! is " << Result << "." << endl;

    return 0;
}

int Factorial(int n)
{
    if(n == 0)  // terminate
    {
        return 1;
    }
    return n*Factorial(n-1);
}