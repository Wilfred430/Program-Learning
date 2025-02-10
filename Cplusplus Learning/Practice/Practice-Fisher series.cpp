//遞迴版

// #include<iostream>
// using namespace std;

// int f(int n)
// {
//     if(n == 1 || n == 2)
//     {
//         return 1;
//     }
//     if(n >= 3)
//     {
//         return f(n - 1) + f(n - 2);
//     }
// }

// int main()
// {
//     int n;
//     while(cin >> n)
//     {
//         cout << f(n) << endl;
//     }

//     return 0;
// }

//迴圈陣列版

#include<iostream>
using namespace std;

int main()
{
    long long fib[75];
    int i, n;

    fib[1] = 1;
    fib[2] = 1;
    for(i = 3; i <= 70 ; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; 
    }
    
    while(cin >> n)
    {
        cout << fib[n] << endl;
    }

    return 0;
}