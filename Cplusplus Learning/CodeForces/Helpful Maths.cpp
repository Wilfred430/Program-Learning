#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    string Sent;
    cin >> Sent;
    int* a = new int[Sent.length()/2 + 1];
    for(i=0;i<=Sent.length();i=i+2)
    {
        a[i/2] = static_cast<int>(Sent[i]) - static_cast<int>('0');
    }
    sort(a,a+Sent.length()/2 + 1);
    cout << a[0] ;
    for(i=1;i < Sent.length()/2 + 1;i++)
    {
        cout << "+" << a[i];
    }
    cout << endl;

    delete [] a;

    return 0;
}