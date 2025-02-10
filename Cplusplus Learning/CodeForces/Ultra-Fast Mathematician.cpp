#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int i;
    string s1 , s2;
    cin >> s1 >> s2;
    for(i=0;i < s1.length();i++)
    {
        if((int(s1[i]) - int('0')) != (int(s2[i]) - int('0')))
        {
            cout << "1";
        }else
        {
            cout << "0";
        }
    }
    cout << endl;
    
    return 0;
}