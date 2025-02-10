//第一版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;

//     for(i = 1;i <= 9; i++)
//     {
//         cout << "1*" << i << "=" << 1*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "2*" << i << "=" << 2*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "3*" << i << "=" << 3*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "4*" << i << "=" << 4*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "5*" << i << "=" << 5*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "6*" << i << "=" << 6*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "7*" << i << "=" << 7*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "8*" << i << "=" << 8*i ;
//         cout << " ";
//     }
//     cout << endl;
//     for(i = 1;i <= 9; i++)
//     {
//         cout << "9*" << i << "=" << 9*i ;
//         cout << " ";
//     }
//     cout << endl;
//     return 0;
// }

//第二版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, j;

//     for(i = 1; i <10 ; i++)
//     {
//         for(j = 1; j < 10; j++)
//         {
//             cout << i << "*" << j << "=" << i * j;
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(j=1;j < 16;j++)
    {
        for(i = 1; i < 11 ;i++)
        {
            cout << j << "*" << i << "=" << j*i << " ";
        }
        cout << endl;
    }
}