//第一版

// #include<iostream>
// using namespace std;

// int main(){

//     int year;

//     while(cin >> year){
//         if((year%4) != 0){
//             cout << "No" << endl;
//         }else if((year%4)==0 && (year%100) != 0){
//             cout << "Yes" << endl;
//         }else if((year%100)==0 && (year%400) != 0){
//             cout << "No" << endl;
//         }else if((year%400)==0){
//             cout << "Yes" << endl;
//         }
//     }

//     return 0;
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int Y;

    while(cin >> Y)
    {
        if(((Y % 400) == 0) || (((Y % 4) == 0) && ((Y % 100) != 0)))
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