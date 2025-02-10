//第一版 (失敗)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int hr, min;

//     while(cin >> hr >> min)
//     {
//         if((hr >= 7 && min >= 30 )&&(hr <= 17 && min <= 0))
//         {
//             cout << "At School" << endl;
//         }
//         else
//         {
//             cout << "Off School" << endl;
//         }
//     }

//     return 0;
// }

//第二版 (列出各種狀況)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int h, m;

//     while(cin >> h >> m)
//     {
//         if(h < 7)
//         {
//             cout << "Off School" << endl;
//         }
//         if(h==7 && m < 30)
//         {
//             cout << "Off School" << endl;
//         }
//         if(h==7 && m >= 30)
//         {
//             cout << "At School" << endl;
//         }
//         if(h > 7 && h < 17)
//         {
//             cout << "At School" << endl;
//         }
//         if(h >= 17)
//         {
//             cout << "Off School" << endl;
//         }

//         return 0;
//     }
// }

//第三版(用if...else...)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int h, m;

//     while(cin >> h >> m)
//     {
//         //目標時間 7:30 ~ 17:00
//         if((h==7 && m >=30) || (h >= 8 && h < 17))
//         {
//             cout << "At School" << endl;
//         }
//         else
//         {
//             cout << "Off School" << endl;
//         }
//     }

//     return 0;
// }

//第四版(將hr全換置成min)
#include<iostream>
using namespace std;

int main()
{
    int h, m, time;

    while(cin >> h >> m)
    {
        time = h * 60 + m;
        if((time >= 450) && (time < 1020))
        {
            cout << "At School" << endl;
        }
        else
        {
            cout << "Off School" << endl;
        }
    }

    return 0;
}