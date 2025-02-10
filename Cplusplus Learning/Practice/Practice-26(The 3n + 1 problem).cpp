//第一版

#include<iostream>
using namespace std;

int main()
{
    int i, j, max, length, tmp, N, T;

    while(cin >> i >> j)
    {
        cout << i << " " << j << " ";

        if(i > j)
        {
            tmp = i;
            i = j;
            j = tmp;
        }

        max = 0;
        T = i;       
        while(T <= j)
        {
            length = 1;

            N = T;
            while(N != 1)
            {
                if(N % 2 == 0)
                {
                    N = N / 2;
                }
                else
                {
                    N = N * 3 + 1;
                }
                
                length = length + 1;
            }

            if( length > max )
            {
                max = length ;
            }
            T = T + 1;
        }
        
        cout << max << endl;
    }

    return 0;
}

//第二版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int left, right, tmp;
//     int k, k_tmp;
//     int ans, ans_tmp;

//     while(cin >> left >> right)
//     {
//         cout << left << " " << right << " ";
//         if( left > right)
//         {
//             tmp = left;
//             left = right;
//             right = tmp;
//         }

//         ans = 0;
//         k = left;
//         while( k <= right)
//         {
//             ans_tmp = 1;

//             k_tmp = k;
//             while( k_tmp != 1)
//             {
//                 if( k_tmp % 2 == 0)
//                 {
//                     k_tmp = k_tmp / 2;
//                 }
//                 else
//                 {
//                     k_tmp = k_tmp * 3 + 1;
//                 }

//                 ans_tmp = ans_tmp + 1;
//             }

//             if( ans_tmp > ans)
//             {
//                 ans = ans_tmp;
//             }

//             k = k + 1;
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }