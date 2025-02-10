#include<iostream>
using namespace std;

int main()
{
    string s;
    char c;

    while(true)
    {
        c = cin.peek();

        if('0' <= c && c <= '9')
        {
            cout << "即將要輸入數字開頭的東西" << endl;
        }
        if('a' <= c && c <= 'z')
        {
            cout << "即將要輸入小寫字母開頭的東西" << endl;
        }

        cin >> s;
        cin.get();
        cout << "輸入了: " << s << endl;
    }

    return 0;
}