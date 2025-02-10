// = mean assignment (let variable becomes some value which you set)
// == mean comparsion -- equal

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a = 3) // false! -- a=3 mean x is be assigned, so it will become 3 -- non-zero(boolean-True), it may not compare.
    {
        cout << "Hello World";
    }

    return 0;
}