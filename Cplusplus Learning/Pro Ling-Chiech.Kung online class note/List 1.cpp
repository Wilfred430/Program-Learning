#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> ListOper;
    ListOper.push_back('A');
    ListOper.push_back('B');
    ListOper.push_back('C');
    ListOper.push_back('D');
    ListOper.push_back('E');

    cout << "Foward:" << endl;
    for(auto p=ListOper.begin();p != ListOper.end();p++)
    {
        cout << *p << " " ;
    }
    cout << endl;

    cout << "Reverse:" << endl;
    for(auto rp=ListOper.rbegin();rp != ListOper.rend();rp++)
    {
        cout << *rp << " " ;
    }
    cout << endl;
}