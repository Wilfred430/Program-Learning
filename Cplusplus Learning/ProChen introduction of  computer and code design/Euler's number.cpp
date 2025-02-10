#include<iostream>
using namespace std;

double Base(int n);

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        cout << Base(n);
    }
    return 0;
}

double Base(int n)
{
    int i,product;
    double k;
    product = 1;
    if(n == 0)
    {
        return 1;
    }
    for(i = 1; i <= n;i++)
    {
        product = product * i;
    }
    k = (1/product);

    return k + Base(n-1);
}