#include<iostream>
using namespace std;

void switchnumber(int& a1, int& a2);

int main()
{
    int a1, a2;

    while(cin >> a1 >> a2)
    {
        switchnumber(a1, a2);
        cout << a1 << " " << a2 << endl;
    }

    return 0;
}

void switchnumber(int& a1, int& a2)
{
    int tmp;

    tmp = a1;
    a1 = a2;
    a2 = tmp;

    return ;
}