#include<iostream>
#include<cctype>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s;
    int i,Low = 0, Upp = 0;
    cin >> s;
    char* a = new char[s.length()];
    for(i=0;i<s.length();i++)
    {
        a[i] = s[i];
    }
    for(i=0;i<s.length();i++)
    {
        if(islower(a[i]))
        {
            Low++;
        }else
        {
            Upp++;
        }
    }
    if(Upp > Low)
    {
        for(i=0;i<s.length();i++)
        {
            cout << static_cast<char>(toupper(a[i]));
        }
        cout << endl;
    }else
    {
        for(i=0;i<s.length();i++)
        {
            cout << static_cast<char>(tolower(a[i]));
        }
        cout << endl;
    }

    return 0;
}