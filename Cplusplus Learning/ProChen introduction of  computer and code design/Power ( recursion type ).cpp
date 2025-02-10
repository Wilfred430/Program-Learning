#include<iostream>
using namespace std;

int Power(int x, int n);

int main()
{
    int x, n, total;

    while(cin >> x >> n)
    {
        total = Power(x, n);

        cout << total << endl;
    }

    return 0;
}

int Power(int x, int n)
{
    if(n <= 0)
    {
        return 1;   //the base number doesn't forget!!
    }
    return x * Power(x, n-1);  //remember have two variables
}