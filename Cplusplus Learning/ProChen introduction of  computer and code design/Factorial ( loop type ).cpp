#include<iostream>
using namespace std;

int main()
{
    int n, i, product;

    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        product = 1;
        for(i = n;i > 0; i--)
        {
            product = product * i;
        }
        cout << product << endl;
    }

    return 0;
}