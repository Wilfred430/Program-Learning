#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int Num;
    cin >> Num;
    while(Num--)
    {
        string Target;
        cin >> Target;
        if(Target.length() <= 10)
        {
            cout << Target << endl;
        }else
        {
            cout << Target[0] << Target.length()-2 << Target[Target.length()-1] << endl;
        }
    }

    return 0;
}