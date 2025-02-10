#include<iostream>
using namespace std;

int main()
{
    int i, n;

    while(cin >> n)
    {
        i=1;
        while(i <= n)
        {
            if((n%i) == 0)
            {
                cout << i << " ";
            }
            i=i+1;
        }
    }

    cout << endl;

    return 0;
}