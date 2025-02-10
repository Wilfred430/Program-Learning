#include<iostream>
using namespace std;

int main()
{
    int N,i;
    cin >> N;
    if(N%2 != 0)
    {
        cout << "-1" << endl;
    }else
    {
        int C = -1;
        for(i=1;i<=N;i++)
        {
            if(i%2 != 0)
            {
                cout << C+3;
                C = C+3;
            }else
            {
                cout << C-1;
                C = C-1;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}