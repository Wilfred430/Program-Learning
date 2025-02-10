//第一版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, i;

//     cin >> n;
//     i = 2;
//     while(i < n)
//     {
//         if((n % i) == 0)
//         {
//             cout << i << " ";
//             n = n / i;
//         }
//         else
//         {
//             i = i + 1;
//         }
//     }
//     cout << n << endl;

//     return 0;
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cin >> n;

    i = 2;
    while(n > 1)
    {
        while((n % i) == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        i = i + 1;
    }
    cout << endl;

    return 0;
}