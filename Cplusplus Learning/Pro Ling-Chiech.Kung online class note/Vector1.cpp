#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Enter a list of positive numbers." << endl;
    cout << "Place a negative number at the end." << endl;

    int next;
    cin >> next;
    while(next > 0)
    {
        v.push_back(next);
        cout << next << " added. ";
        cout << "v.size() = " << v.size() << endl;
        cin >> next;
    }

    cout << "You entered:" << endl;
    for(unsigned int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}