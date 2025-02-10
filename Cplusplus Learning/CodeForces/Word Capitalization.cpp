#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;
    char* a = new char[s.length()];
    for(i=0;i<s.length();i++)
    {
        a[i] = s[i];
    }   
    a[0] = static_cast<char>(toupper(a[0]));
    for(i=0;i<s.length();i++)
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}