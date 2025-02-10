#include<iostream>
#include<cmath>
using namespace std;

const double Pi = 3.14159;

class Circle
{
    private:
        double radius;
    public:
        void setRadius(double r);
        double Area();
        double Circumference();
};

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::Area()
{
    return Pi*pow(radius,2);
}

double Circle::Circumference()
{
    return 2*Pi*radius;
}

int main()
{
    Circle A;

    A.setRadius(5);
    cout << A.Area() << endl;
    cout << A.Circumference() << endl;

    return 0;
}