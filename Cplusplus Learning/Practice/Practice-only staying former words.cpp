//Normal

// #include<iostream>
// using namespace std;

// int main()
// {
//     char name[55];
//     int i, n;

//     while(cin >> name >> n)
//     {
//         for(i = 0; i <= n-1; i++)
//         {
//             cout << name[i];
//         }
//         cout << endl;
//     }

//     return 0;
// }

//put \0 version

// #include<iostream>
// using namespace std;

// int main()
// {
//     char s[55];
//     int n;

//     while(cin >> s >> n)
//     {
//         s[n] = '\0';
//         cout << s << endl;
//     }

//     return 0;
// }

//loop controlling version

#include<iostream>
using namespace std;

int main()
{
    char s[55];
    int i, n;

    while(cin >> s >> n)
    {
        for(i = 0; i < n ; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}