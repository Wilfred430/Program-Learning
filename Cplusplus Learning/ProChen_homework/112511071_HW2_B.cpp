#include<iostream>  
using namespace std;

int main()
{
    int a, b, c, tmp;
    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;
    if(a > b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    if(a > c)
    {
        tmp = c;
        c = a;
        a = tmp;
    }
    if(b > c)
    {
        tmp = c;
        c = b;
        b = tmp;
    }
    cout << "Numbers in ascending order: " << a << " " << b << " " << c;
    return 0;

}