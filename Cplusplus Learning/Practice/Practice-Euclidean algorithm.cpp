//Simulation on paper

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;

//     while(cin >> a >> b)
//     {
//         while(a != 0 && b != 0)
//         {
//             if(a >= b)
//             {
//                 a = a % b;
//             }
//             else if(b > a)
//             {
//                 b = b % a;
//             }
//         }

//         if(a >= b)
//         {
//             cout << a << endl;
//         }
//         else
//         {
//             cout << b << endl;
//         }
//     }

//     return 0;
// }

// non - if version

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, t;

//     while(cin >> a >> b)
//     {
//         while(b != 0)
//         {
//             t = b;
//             b = a % b;
//             a = t;
//         }
//         cout << a << endl;
//     }

//     return 0;
// }

// recursion version

#include<iostream>
using namespace std;

int f(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return f(b , a % b);
}

int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        cout << f(a, b) << endl;
    }

    return 0;
}