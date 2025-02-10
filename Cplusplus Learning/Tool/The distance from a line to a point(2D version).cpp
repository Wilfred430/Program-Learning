#include<iostream>
#include<cmath>
using namespace std;

struct TwoDline
{
    double f;
    double s;
    double t;
};

struct Point
{
    double x;
    double y;
};

double CalculateDistance(TwoDline L, Point P)
{
    double result;
    result = abs(L.f*P.x + L.s*P.y + L.t) / static_cast<double>(sqrt(pow(L.f,2)+pow(L.s,2)));
    return result;
}

int main()
{
    TwoDline L;
    Point P;
    cout << "Please enter the coefficients of the 2D line (ax+by+c)." << endl;
    cout << "(a,b,c): ";
    cin >> L.f >> L.s >> L.t;
    cout << "Please enter the Point coordinate (x,y): ";
    cin >> P.x >> P.y;
    cout << "The minimun distance is " << CalculateDistance(L,P) << "!" << endl;

    return 0;
}