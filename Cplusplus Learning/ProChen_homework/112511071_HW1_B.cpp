#include<iostream>
using namespace std;

int main()
{
    int Hour, Minute, Second;
    cout << "Enter the hour of the day: ";
    cin >> Hour ;

    while((Hour > 23) || (Hour < 0))
    {
        cout << "Enter the hour of the day: ";
        cin >> Hour ;
    }
    cout << "Enter the minutes of the hour: ";
    cin >> Minute ;
    while((Minute > 59) || (Minute < 0))
    {
        cout << "Enter the minutes of the hour: ";
        cin >> Minute ;
    }
    cout << "Enter the seconds passed in the current minute: ";
    cin >> Second ;
    while((Second > 59) || (Second < 0))
    {
        cout << "Enter the seconds passed in the current minute: ";
        cin >> Second ;
    }
    cout << "The time in seconds since midnight is: " << Hour * 3600 + Minute * 60 + Second;

    return 0;
}