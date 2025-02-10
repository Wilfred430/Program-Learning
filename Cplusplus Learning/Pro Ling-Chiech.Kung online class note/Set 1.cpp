#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<char> s;
    s.insert('A');
    s.insert('D');
    s.insert('A');
    s.insert('B');
    s.insert('C');
    s.insert('C');

    for(auto p=s.begin();p!=s.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    s.erase('A');

    for(auto p=s.begin();p!=s.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}