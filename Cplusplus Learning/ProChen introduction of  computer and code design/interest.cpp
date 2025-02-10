#include<iostream>
using namespace std;

int main()
{
    double balance = 50.00;
    int count = 0;
    cout << "The interest rate is 2% per month\n";

    while(balance < 100)
    {
        balance = balance + balance * 0.02;
        count++;
    }
    
    cout << "After " << count << " month, the debt will become double.";

    return 0;
}