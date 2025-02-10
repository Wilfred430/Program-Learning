#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;

    cout << "Enter vocabulary: " << endl;
    char next;
    cin.get(next);
    while(next != '\n')
    {
        s.push(next);
        cin.get(next);
    }

    cout << "Written backward" << endl;
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}