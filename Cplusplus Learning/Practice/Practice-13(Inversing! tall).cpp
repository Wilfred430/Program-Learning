//第一版(for迴圈版)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, N, num[101];

//     cin >> N;

//     for( i = 0 ; i < N ; i = i + 1)
//     {
//         cin >> num[i] ; 
//     }
//     for( i = N - 1; i >= 0 ; i = i - 1)
//     {
//         cout << num[i] << endl;
//     }

//     return 0;
// }

//第二版(while 迴圈版)
#include<iostream>
using namespace std;

int main()
{
    int N, i, tall[105];

    cin >> N;

    i = 0;
    while(i < N)
    {
        cin >> tall[i];
        i = i + 1;
    }

    i = N - 1;
    while(i >= 0)
    {
        cout << tall[i] << endl;
        i = i - 1;
    }

    return 0;
}