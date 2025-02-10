#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,num=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1])
        {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}