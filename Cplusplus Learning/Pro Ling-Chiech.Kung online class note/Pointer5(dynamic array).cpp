// #include<iostream>
// using namespace std;

// int maib()
// {
//     int len;
//     int* a = new int[len];
//     for(int i=0;i<len;i++)
//     {
//         a[i] = i+1;
//     }
// }

//Fibonacci Sequence

#include<iostream>
using namespace std;

double FibonacciSequence(int n);

int main()
{
    int N;
    cin >> N;
    cout << FibonacciSequence(N) << endl;

    return 0;
}

double FibonacciSequence(int n)
{
    if(n == 1)
    {
        return 1;
    }else if(n == 2)
    {
        return 1;
    }
    double* fib = new double[n];
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2;i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    double result = fib[n-1];
    delete[] fib;

    return result;
}