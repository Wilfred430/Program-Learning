#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int i;
    for(i=0;i<a.length();i++)
    {
        if(a[i] == '-' && a[i+1] == '-')
        {
            i++;
            cout << 2;
        }else if(a[i] == '-' && a[i+1 == '.'])
        {
            i++;
            cout << 1;
        }else
        {
            cout << 0;
        }
    }

    return 0;
}