//第一版
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, i, num;

//     while(cin >> n)
//     {
//         if(n == 0)
//         {
//             break;
//         }
//         i=1;
//         num=0;
//         while(n >= i)
//         {
//             num = num + i * i;
//             i = i + 1;
//         }

//         cout << num << endl;
//     }

//     return 0;
// }

//第二版
#include<iostream>
using namespace std;

int main()
{
    int N, i, ans;

    while(cin >> N)
    {
        if(N == 0)
        {
            break;
        }
        i=0;
        ans=0;
        while(i <= N)
        {
            ans = ans + (N-i)*(N-i);
            i = i + 1;
        }
        cout << ans << endl;
    }

    return 0;
}