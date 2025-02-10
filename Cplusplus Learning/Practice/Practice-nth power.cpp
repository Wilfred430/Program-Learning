//次方
//                 { 1  if b = 0
// a^b = f(a, b) = {
//                 { a * f(a, b - 1)  if b >= 1

#include<iostream>
using namespace std;

int f(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    if(b >= 1)
    {
        return a * f(a, b - 1);
    }
}

int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        cout << f(a, b) << endl;
    }

    return 0;
}