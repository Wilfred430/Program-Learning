#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const double GRAVITY = 9.8;    //const always all in capitals.
    double height;

    cin >> height;

    cout << "If we release a ball from free motion\n";
    cout << "After " << sqrt(((2 * height) / GRAVITY)) << "seconds, the ball will arrive ground";
    
    return 0;

}