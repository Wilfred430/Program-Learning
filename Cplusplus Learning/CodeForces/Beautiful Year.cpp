#include<iostream>
using namespace std;

int main()
{
    int Year;
    cin >> Year;
    while(1)
    {
        Year++;
        int a = Year%10;
        int b = (Year/10)%10;
        int c = (Year/100)%10;
        int d = (Year/1000)%10;
        if(a!=b && a!=c && a!= d && b!=c && b!=d && c!=d)
        {
            break;
        } 
    }
    cout << Year;

    return 0;
}