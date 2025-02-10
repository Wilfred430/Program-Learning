#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<char> q;

    cout << "Enter vocabulary: " << endl;
    char next;
    cin.get(next);
    while(next != '\n')
    {
        q.push(next);
        cin.get(next);
    }

    cout << "Written backward" << endl;
    while(!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;

    return 0;
}