#include<iostream>
using namespace std;

int recursive(int x, int y);

int main()
{
    int x, y;

    while(1)
    {
        cout << "Please input x and y in order:" ;
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            break;
        }
        cout << "answer: " << recursive(x, y) << endl;
    }

    return 0;
}

int recursive(int x, int y)
{
    int g,h,j,k;

    if(x < 0 || y < 0)
    {
        return 0;
    }else if(x == 0 && y == 0)
    {
        return 1;
    }else
    {
        g = recursive(x-1, y);
        h = recursive(x-2, y);
        j = recursive(x, y-1);
        k = recursive(x, y-2);
    }

    return g+h+j+k;
}