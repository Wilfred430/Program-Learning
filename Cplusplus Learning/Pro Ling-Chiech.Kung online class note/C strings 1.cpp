// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 0, b = 0;
//     char c = 0;

//     do
//     {
//         cout << "Enter teo integers: ";
//         cin >> a >> b;
//         cout << "Add? ";
//         cin >> c;
//     }while(c != 'Y' && c != 'y');
//     cout << a+b << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char c;
//     while(cin >> c)
//     {
//         if(65 <= c && c <= 90)
//         {
//             cout << static_cast<char>(c+32);
//         }else
//         {
//             cout << c;
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char c;
//     while(cin >> c)
//     {
//         cout << static_cast<char>(tolower(c));
//     }

//     return 0;
// }

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char c;
    while(cin >> c)
    {
        cout << static_cast<char>(tolower(c));
    }

    return 0;
}