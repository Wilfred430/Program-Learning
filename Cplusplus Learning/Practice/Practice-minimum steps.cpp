#include<iostream>
using namespace std;

int minimumStep(int x, int y);

int main()
{
    int step,x,y;

    while(1)
    {
        cout << "Please enter the coordinate from x to y:";
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            break;
        }else
        {
            cout << "The answer is " << minimumStep(x,y)/(minimumStep(x,0)*minimumStep(0,y))<< endl;
        }
    }

    return 0;
}

int minimumStep(int x, int y)
{
    int k;
    k = x + y;
    if(k == 0)
    {
        return 1;
    }

    return k * minimumStep(x-1,y);
}