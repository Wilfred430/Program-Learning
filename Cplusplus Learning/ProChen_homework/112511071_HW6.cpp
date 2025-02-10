#include<iostream>
using namespace std;

void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{
    int num, amountLeft;

    while(1)
    {
        cout << "Please enter the amount of change: ";
        cin >> amountLeft;
        if(amountLeft == 0)
        {
            break;
        }else
        {
            cout << amountLeft; cout << " cent(s) = " ; computeCoins(25, num, amountLeft); cout  << " quarter(s) + ";computeCoins(10, num, amountLeft); cout << " dime(s) + "; computeCoins(1, num, amountLeft);  cout << " penny(pennies)" << endl;
        }
    }

    return 0;
}

void computeCoins(int coinValue, int& num, int& amountLeft)
{
    int k;
    k = amountLeft/coinValue;
    num = k;
    if(coinValue == 25)
    {
        cout << k ;
    }else if(coinValue == 10)
    {
        cout << k;
    }else if(coinValue == 1)
    {
        cout << k;
    }
    amountLeft = amountLeft - k*coinValue;

    return;
}