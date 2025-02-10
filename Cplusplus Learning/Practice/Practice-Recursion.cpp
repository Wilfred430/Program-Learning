//階乘
//      { 1  if n = 0
// n! = {
//      { n * f(n - 1) if n >= 1

#include<iostream>
using namespace std;

int f(int n)
{
    if(n == 0)
        return 1;
    
    if(n >= 1)
        return n * f(n - 1);

}

int main()
{
    int n;

    while(cin >> n)
    {
        cout << f(n) << endl;
    }

    return 0;
}
