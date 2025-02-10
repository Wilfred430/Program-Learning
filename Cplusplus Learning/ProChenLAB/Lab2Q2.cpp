#include<iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Please input three real numbers and do conversion of temperature unit:" << endl;
    cout << "Input 1 => "; 
    cin >> a ;
    double x = (5/9) * (a - 32);
    cout << "Input 1 is " << a << "*F => " << x << "*C";

}