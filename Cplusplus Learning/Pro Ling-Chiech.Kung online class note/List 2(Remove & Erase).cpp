#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> List;

    List.push_back('A');
    List.push_back('B');
    List.push_back('B');
    List.push_back('C');
    List.push_back('D');
    List.push_back('E');

    List.remove('B');

    for(auto p=List.begin();p!=List.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    for(auto p=List.begin();p!=List.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}