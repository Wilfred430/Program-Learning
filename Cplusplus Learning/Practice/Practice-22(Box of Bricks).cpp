//第一版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, hi[100], i, sum, average_level, gap[100], min;

//     i = 0;
//     cin >> n;

//     if(n == 0)
//     {
//         return 0;
//     }
//     while(i < n)
//     {
//         cin >> hi[i];
//         i = i + 1;
//     }
//     i = 0;
//     sum = 0;
//     while(i < n)
//     {
//         sum = sum + hi[i];
//         i = i + 1;
//     }
//     if(n > 0)
//     {
//         average_level = sum / n;
//     }
//     i = 0; 
//     min = 0;
//     while(i < n)
//     {
//         gap[i] = hi[i] - average_level;
//         if(gap[i] > 0)
//         {
//             min = min + gap[i];
//         }
//         i = i + 1;
//     }
//     cout << "The minimum number of moves is " << min << "." << endl;

//     return 0;
// }

//第二版(多與少接算入)

#include<iostream>
using namespace std;

int main()
{
    int h[60];
    int n, sum, avg, ans, i;

    cin >> n;

    sum = 0;
    for(i = 0; i < n; i = i + 1)
    {
        cin >> h[i];
        sum = sum + h[i];
    }

    avg = sum / n;
    ans = 0;
    for(i = 0;i < n; i = i + 1)
    {
        if(avg > h[i])
        {
            ans = ans + avg - h[i];
        }
        if(avg < h[i])
        {
            ans = ans + h[i] - avg;
        }
    }
    ans = ans / 2;
    cout << "The minimum number of moves is " << ans << "." << endl;
    cout << endl;

    return 0;
}