#include<iostream>
using namespace std;

int main()
{
    int hour, rate;
    cin >> hour >> rate;

    if(hour <= 40)
    {
        cout << rate * hour;
    }
    else
    {    
        cout << 40 * rate + 1.5 * rate * (hour - 40);     //如果else後沒括號，他只會執行第一行，並且第一行後的所有statement會被無條件output
    }    
    return 0;
}

