#include<iostream>
using namespace std;

int main()
{
    float a, b, c, d, e;

    cout << "Please input five floating-point numbers\n";
    cout << "=> ";
    cin >> a >> b >> c >> d >> e;

    cout << "input are " << a << " " << b << " " << c << " " << d << " " << e << endl;
    cout << "The sum is " << (a + b + c + d + e) << endl;
    cout << "The average is " << (a + b + c + d + e)/5;

    return 0;
}