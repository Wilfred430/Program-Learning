#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;
    int z;
};

int main()
{
    Point A[100];
    for(int i=0;i<50;i++)
    {
        A[i] = {i};
    }
    for(int i=0;i<100;i++)
    {
        cout << A[i].x << " " << A[i].y << " " << A[i].z << endl;
    }

    return 0;
}