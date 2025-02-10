#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct Count
{
    int One;
    int Zero;
};

int main()
{
    int N,i;
    Count Right, Left;
    Right.One=0;Right.Zero=0;Left.One=0;Left.Zero=0;
    cin >> N;
    int** a = new int*[N];
    for(i=0;i<N;i++)
    {
        a[i] = new int[2];
    }
    for(i=0;i<N;i++)
    {
        cin >> a[i][0] >> a[i][1];
        if(a[i][0] == 0)
        {
            Left.Zero++;
        }else
        {
            Left.One++;
        }
        if(a[i][1] == 0)
        {
            Right.Zero++;
        }else
        {
            Right.One++;
        }
    }
    cout << min(Left.One,Left.Zero) + min(Right.One,Right.Zero) << endl;

    return 0;
}