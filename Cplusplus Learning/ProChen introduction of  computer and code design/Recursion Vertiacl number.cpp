#include<iostream>
using namespace std;

void writeVerticalNumber(int N);

int main()
{
    int N;
    while(cin >> N)
    {
        if(N == 0)
        {
            break;
        }else
        {
            writeVerticalNumber(N);
        }
    }
//EZ HW
    return 0;
}

void writeVerticalNumber(int N)
{
    if(N < 10)
    {
        cout << N << endl;
    }else
    {
        writeVerticalNumber(N/10);
        cout << N%10 << endl;
    }
}