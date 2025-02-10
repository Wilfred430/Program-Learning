#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');

    cout << "Foward:" << endl;
    for(auto p=v.begin();p!=v.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Reverse:" << endl;
    for(auto rp=v.rbegin();rp!=v.rend();rp++)
    {
        cout << *rp << " ";
    }
    cout << endl;

    return 0;
}