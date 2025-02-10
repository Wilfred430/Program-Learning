#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    while(cin >> a)
    {
        if(a == "ignore")
        {
            continue;
        }else if(a == "exit")
        {
            break;
        }else
        {
            cout << a << endl;
        }
    }

    return 0;
}