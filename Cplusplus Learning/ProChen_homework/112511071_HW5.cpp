#include<iostream>
#include<cmath>
using namespace std;

double Basal(double Weight);

double Physical(double Weight, double intensity, double minutes);

int main()
{
    double Weight, intensity, minutes, calories_for_food;

    while(1)
    {
        cout << "Please enter the (weight,intensity,minutes,calories_for_food): ";
        cin >> Weight >> intensity >> minutes >> calories_for_food;
        if((Weight == 0)&&(intensity == 0)&&(minutes == 0)&&(calories_for_food == 0))
        {
            break;
        }
        cout << "You need to eat " << ((Basal(Weight) + Physical(Weight, intensity, minutes)) / 0.9) / calories_for_food << " servings of tour favorite food per day!" << endl;
    }

    return 0;
}

double Basal(double Weight)
{
    double Rate;
    Rate = 70 * pow((Weight / 2.2), 0.756);

    return (Rate);
}

double Physical(double Weight, double intensity, double minutes)
{
    double Left;

    Left = 0.0385 * intensity *  Weight * minutes;

    return (Left);
}