#include<iostream>
using namespace std;

int main()
{
    int x, n, i, product;

    while(cin >> x >> n)
    {
        product = 1;
        for(i = 0; i < n;i++)
        {
            product = product * x;
        }

        cout << product << endl;
    }

    return 0;
}

/*
pow(x, n); also have same function
*/