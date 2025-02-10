#include<iostream>
#include<iterator>
#include<list>
using namespace std;

int main()
{
    list<char> List1;

    List1.push_back('A');
    List1.push_back('B');
    List1.push_back('C');
    List1.push_back('D');
    List1.push_back('E');
    List1.push_back('F');

    cout << "Foward:" << endl;
    for(auto p=List1.begin();p!=List1.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    List1.reverse();

    cout << "Reverse:" << endl;
    for(auto p=List1.begin();p!=List1.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    list<char> List2;

    List2.push_back('A');
    List2.push_back('B');
    List2.push_back('C');
    List2.push_back('D');
    List2.push_back('E');
    List2.push_back('F');

    List2.merge(List1);

    cout << "After merge:" << endl;
    for(auto p=List2.begin();p!=List2.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}