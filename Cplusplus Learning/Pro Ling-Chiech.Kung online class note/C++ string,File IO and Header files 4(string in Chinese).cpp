#include<iostream>
#include<cstring>
using namespace std;

//a Chinese is store by 2 bit

// int main()
// {
//     string s="大家好";
//     cout << s[1] << endl;
//     char c[100] = "大家";
//     cout << c + 2 << endl;

//     return 0;
// }

int main()
{
    string s = "大家好";
    int s_len = s.length();
    string t = s;
    for(int i=0;i<s_len-1;i+=2)
    {
        t[s_len-i-2] = s[i];
        t[s_len-i-1] = s[i+1];
    }

    cout << t << endl;

    return 0;
}