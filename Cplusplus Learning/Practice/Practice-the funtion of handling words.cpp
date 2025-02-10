// cin.get - 讀取下一個字元

// #include<iostream>
// using namespace std;

// int main()
// {
//     char c;

//     while(true)
//     {
//         c = cin.get();
//         cout << "得到字元[" << c << "]  ASCII編號 [" << (int)c << "]" << endl;
//     }

//     return 0;
// }

// cin.peek() 偷看

// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     char c;

//     while(true)
//     {
//         c = cin.peek();

//         if('0' <= c && c <= '9')
//         {
//             cout << "即將要輸入數字開頭的東西" << endl;
//         }
//         if('a' <= c && c <= 'z')
//         {
//             cout << "即將要輸入小寫字母開頭的東西" << endl;
//         }

//         cin >> s;
//         cin.get(); //先讀調 換行字元'\n' 避免下次偷看到
//         cout << "輸入了:" << s << endl;
//     }

//     return 0;
// }

//cin.getline() - 讀取整行

// #include<iostream>
// using namespace std;

// int main()
// {
//     char s[105];

//     while(true)
//     {
//         cin.getline(s, 100); // (字元陣列, 最多字元數)
//         cout << "得到: " << s << endl;
//     }

//     return 0;
// }

// 

/*#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i = 1;i < 10;++++i)
    {
        cout << i << endl;
    }

    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
    int i,n,j,h;

    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                cout << " ";
            }
            for(h=0 ;h <= i;h++)
            {
                cout << "+" << " ";
            }
            cout << endl;
        }
    }
}