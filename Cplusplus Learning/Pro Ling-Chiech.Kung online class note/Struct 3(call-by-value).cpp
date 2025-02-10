#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

void reflect(Point& a)
{
    int tmp = a.x;
    a.x = a.y;
    a.y = tmp;
}

int main()
{
    Point a = {10,20};
    cout << a.x << " " << a.y << endl;
    reflect(a);
    cout << a.x << " " << a.y << endl;
    return 0;
}