#include<cstring>
#include<iostream>

using namespace std;

int main()
{
    string s="123";
    char c[100] = "456";
    string t = s+c;
    string u=s+"789"+t;
    cout << u << endl;

    return 0;
}