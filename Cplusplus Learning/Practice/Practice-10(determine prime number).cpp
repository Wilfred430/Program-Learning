//第一版(判斷因數數量)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, n, num;

//     while(cin >> n)
//     {
//         i=1;
//         num=0;
        
//         while(i <= n)
//         {
//             if((n%i)==0)
//             {
//                 num=num+1;
//             }
//             i=i+1;
//         }
//         if(num==2)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }

//     }
    
//     return 0;
// }

//第二版(用大量因數來確認，然後再用變數的轉換來確認質數)
#include<iostream>
using namespace std;

int main()
{
    int i, n, ans;

    while(cin >> n)
    {
        ans = 1;

        i=2;
        while(i < n)
        {
            if((n%i)==0)
            {
                ans = 0;
            }
            i=i+1;
        }
        if(ans == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}