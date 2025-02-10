//第一版(有瑕疵~10的次方有誤差)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, n, num;

//     while(cin >> n)
//     {   
//         i=10;
//         num=1;
//         while(i < n)
//         {    
//             if((n/i) >= 10)
//             {
//                 num = num + 1;
//             }else{
//                 num = num + 1;
//             }
//             i = i * 10;
//         }

//         cout << num << endl;
//     }

//     return 0;
// }

//第二版(第一版改版)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, n, num;

//     while(cin >> n)
//     {
//         i=10;
//         num = 1;
//         while(i <= n)
//         {
//             num = num + 1;
//             i = i * 10;
//         }
//         cout << num << endl;
//     }

//     return 0;
// }

//第三版(一邊減少n的位數，一邊增加技術)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, ans;

//     while(cin >> n)
//     {
//         ans = 0;
//         while(n > 0)
//         {
//             n = n / 10;
//             ans = ans + 1;
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

//第四版(if全列)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;

//     while(cin >> n)
//     {
//         if(n >= 1 && n <= 9)
//         {
//             cout << 1 << endl;
//         }
//         if(n >= 10 && n <= 99)
//         {
//             cout << 2 << endl;
//         }
//         if(n >= 100 && n <= 999)
//         {
//             cout << 3 << endl;
//         }
//         if(n >= 1000 && n <= 9999)
//         {
//             cout << 4 << endl;
//         }
//         if(n >= 10000 && n <= 99999)
//         {
//             cout << 5 << endl;
//         }
//         if(n >= 100000 && n <= 999999)
//         {
//             cout << 6 << endl;
//         }
//         if(n >= 1000000 && n <= 9999999)
//         {
//             cout << 7 << endl;
//         }
//         if(n >= 10000000 && n <= 99999999)
//         {
//             cout << 8 << endl;
//         }
//         if(n >= 100000000 && n <= 999999999)
//         {
//             cout << 9 << endl;
//         }
//         if(n >= 1000000000 && n <= 9999999999)
//         {
//             cout << 10 << endl;
//         }
//     }
// }

//第五版(第四版延伸)
#include<iostream>
using namespace std;

int main()
{
    int n, i;
    int ans, low, up;

    while(cin >> n)
    {
        low = 1;
        up = 9;
        ans = 1;

        while(1)
        {
            if(low<=n && n<=up)
            {
                cout << ans << endl;
                break;
            }
            low = low*10;
            up = up*10 + 9;
            ans = ans + 1;
        }
    }

    return 0;
}

