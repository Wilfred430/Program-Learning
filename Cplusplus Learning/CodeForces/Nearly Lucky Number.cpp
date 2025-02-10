#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int i,IS = 0;
    string s;
    bool IL = true;
    bool newL = true;
    getline(cin,s);
    if(s.length() == 0)
    {
        newL = false;
        cout << "NO" << endl;
    }
    for(i=0;i<s.length();i++)
    {
        if(int(s[i])-int('0') == 4 || int(s[i])-int('0') == 7)
        {
            IS++;
        }
    }
    if(newL)
    {
        if(IS == 4 || IS == 7)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
