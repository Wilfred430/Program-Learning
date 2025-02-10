#include<iostream>
#include<cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

double CalculatePointDistance(Point& a,Point& b)
{
    double result;
    result = sqrt(pow(abs(a.x-b.x),2) + pow(abs(a.y-b.y),2));

    return result;
}


int main()
{
    Point a,b;
    cout << "Enter the first point's (x,y): ";
    cin >> a.x >> a.y;
    cout << "Enter the second point's (x,y): ";
    cin >> b.x >> b.y;

    cout << "The distance is " << CalculatePointDistance(a,b) << " !" << endl;

    return 0;
}