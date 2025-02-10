#include<iostream>
using namespace std;

int Fibonacci(int N);

int main()
{
    int N;
    cout << "Please enter N you want you know: " ;
    cin >> N;
    cout << Fibonacci(N);
}

int Fibonacci(int N)
{
    if(N < 2)
    {
        if(N == 0)
        {
            return 0;
        }else if(N == 1)
        {
            return 1;
        }
    }else
    {
        return Fibonacci(N-1) + Fibonacci(N-2);
    }
    return 0;
}