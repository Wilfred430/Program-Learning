#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n, total;

    while(cin >> n)
    {
        total = factorial(n);

        cout << total << endl;
    }

    return 0;
}

int factorial(int n)
{
    if(n <= 1)      //this line don't forget! without it the recursion will be infinite loop
    {
        return 1;
    }
    return n * factorial(n - 1);
}