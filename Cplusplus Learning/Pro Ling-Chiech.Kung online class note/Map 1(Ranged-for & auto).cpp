#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main()
{
    map<int ,string> Person = {{1,"Walt"},{2,"Kenrick"}};
    set<string> Color = {"red","green","blue"};
    for(auto p:Person)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    for(auto p:Color)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}