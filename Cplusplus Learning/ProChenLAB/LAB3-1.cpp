#include<iostream>
using namespace std;

int main()
{
    int a, low, up, n;
    a=37;
    up=100;
    low=0;
    while(1)
    {
        cout << "Please enter the number you guess (range " << low << "~" << up << "):";
        cin >> n;
        if(n == 0)
        {
            cout << "Answer is " << a << endl;
        }else if(n == a)
        {
            cout << "Congratulation!" << endl;
            break;
        }else if((n >= up)||(n <= low))
        {
            cout << n << " is not in the range!!" << endl;
        }else if(n > a)
        {
            up = n;
            cout << "Guess up" << endl; 
        }else if(n < a)
        {
            low = n;
            cout << "Guess down" << endl;
        }
    }
    return 0;
}