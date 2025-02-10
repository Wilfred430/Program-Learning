#include<iostream>
using namespace std;

int main()
{
    int N, T, n, t, m, num[105], i;

    cin >> N >> T;

    for(i = 0; i < N ; i = i + 1 )
    {
        num[i] = 0;
    }

    i = 0;
    while(i < T)
    {
        cin >> n >> t >> m;
        if(t == 1)
        {
            num[n] = num[n] + m;
        }
        if(t == 2)
        {
            num[n] = num[n] - m;
        }

        i = i + 1;
    }

    n = 0;
    while(n < N)
    {   
        cout << n << " : " << num[i] << endl;
        n = n + 1;
    }
    cout << endl;

    return 0;
}