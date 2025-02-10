#include<vector>
#include<iostream>
using namespace std;

void printVector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    cout << v.size() << endl;
    cout << v.max_size() << endl;
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    printVector(v);
    v.pop_back();
    printVector(v);

    return 0;
}