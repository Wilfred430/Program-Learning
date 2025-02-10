#include<iostream>
using namespace std;

int main()
{
    int N, i, num[105], min, max;

    cin >> N;
    i = 0;
    while(i < N)
    {
        cin >> num[i];
        i = i + 1;
    }

    min = 20000;
    max = 0;
    i = 0;
    while(i < N)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
        if(num[i] < min)
        {
            min = num[i];
        }
        i = i + 1;
    }

    cout << max << " " << min << endl;

    return 0;
}