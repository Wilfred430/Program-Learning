#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    double b = 10.5;
    int* aPtr = &a;
    double* bPtr = &b;

    cout << &a << endl;
    cout << &b << endl;
    cout << &aPtr << endl;
    cout << &bPtr << endl;

    return 0;
}