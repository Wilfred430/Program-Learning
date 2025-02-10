//未成功的半完成品

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, R, back[10005], i, num;

//     while(cin >> n >> R)
//     {
//         i = 1;
//         while(i <= n)
//         {
//             back[i] = 0;
//             i = i + 1;
//         }
//         i = 0;
//         while(i < R) //cin 不能放此處，不然只能有效輸入只有一個數字
//         {
//             cin >> num;
//             back[num] = 1;
//             i = i + 1;
//         }
//         if(n == R)
//         {
//             cout << "*" << endl;
//         }
//         else
//         {
//             i = 1;
//             while(i <= n)
//             {
//                 if(back[i] == 0)
//                 {
//                     cout << i << " ";
//                 }
//                 i = i + 1;
//             }
//             cout << endl;
//         }
//     }
// }

//老師參考答案
#include<iostream>
using namespace std;

int main()
{
    int n, R, i, man, back[10005];

    while(cin >> n >> R)
    {
        i = 1;
        while(i <= n)
        {
            back[i] = 0;
            i = i + 1;
        }

        i = 0;
        while(i < R)
        {
            cin >> man;
            back[man] = 1;

            i = i + 1;
        }

        if( n == R )
        {
            cout << "*" << endl;
        }
        else
        {
            i = 1;
            while(i <= n)
            {
                if(back[i] == 0)
                {
                    cout << i << " ";
                }
                i = i + 1;
            }
            cout << endl;
        }
    }
}