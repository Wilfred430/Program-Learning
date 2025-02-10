#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator p;
    for(p = v.begin();p!=v.end();p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}