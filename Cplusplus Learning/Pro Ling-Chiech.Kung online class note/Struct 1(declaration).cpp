#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

Point vector(Point A, Point B);

int main()
{
    Point a = {0,0}, b = {10,20};
    Point vecAB = vector(a,b);
    cout << vecAB.x << " ";
    cout << vecAB.y << endl;
    return 0;
}

Point vector(Point A, Point B)
{
    Point vecXY;
    vecXY.x = B.x - A.x;
    vecXY.y = B.y - A.y;
    return vecXY;
}