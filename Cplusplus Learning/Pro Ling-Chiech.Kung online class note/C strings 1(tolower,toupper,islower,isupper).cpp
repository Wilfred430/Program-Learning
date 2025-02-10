#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    char c;
    while(cin >> c)
    {
        cout << static_cast<char>(toupper(c));
    }

    return 0;
}