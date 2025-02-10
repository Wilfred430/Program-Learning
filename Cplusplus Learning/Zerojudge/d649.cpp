#include<iostream>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        if(num == 0)
        {
            break;
        }
        for(int i=0;i<num;i++)
        {
            for(int f=0;f<num-i-1;f++)
            {
                cout << "_";
            }
            for(int j=0;j<=i;j++)
            {
                cout << "+";
            }
            cout << endl;
        }
    }

    return 0;
}