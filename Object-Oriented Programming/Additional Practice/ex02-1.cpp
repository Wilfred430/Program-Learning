#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int Radius = 5;
    cout << setprecision(4) << PI*static_cast<double>(pow(Radius,2)) << endl;
}