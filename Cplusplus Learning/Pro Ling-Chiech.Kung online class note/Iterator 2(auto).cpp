#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }

    for(auto p=v.begin();p!=v.end();p++)
    {
        cout << *p << " ";
    }

    cout << endl;

    return 0;
}