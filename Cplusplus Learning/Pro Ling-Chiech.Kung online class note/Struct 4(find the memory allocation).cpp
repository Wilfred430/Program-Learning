#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    int i;
    Point a[3];
    cout << sizeof(Point) << " " << sizeof(a) << endl;
    cout << &a << endl;
    for(i=0;i<3;i++)
    {
        cout << &a[i] << " " << &a[i].x << " " << &a[i].y << endl;
    }
    Point* b = new Point[3];
    cout << sizeof(b) << endl;
    delete [] b;

    return 0;
}