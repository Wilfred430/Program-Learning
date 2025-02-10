#include<iostream>
using namespace std;

int recursive(int x, int y, int k, int t);

int main()
{
    int x,y,k=0,t=0;

    while(1)
    {
        cout << "Please input x and y in order:";
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            break;
        }
        cout << "answer: " << recursive(x, y, k, t) << endl;
    }

    return 0;
}

int recursive(int x, int y, int k, int t)
{
    int step1 , step2 , step3, step4;  
    if(k > x || t > y)
    {
        return 0;
    }else if(k == x && t == y)
    {
        return 1;
    }else
    {
        step1 = recursive(x,y,k+1,t);
        step2 = recursive(x,y,k+2,t);
        step3 = recursive(x,y,k,t+1);
        step4 = recursive(x,y,k,t+2);
    }

    return step1 + step2 + step3 + step4;
}