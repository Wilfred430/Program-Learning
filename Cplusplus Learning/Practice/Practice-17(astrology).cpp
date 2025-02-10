//第一版

// #include<iostream>
// using namespace std;

// int main(){

//     int M, D;

//     while(cin >> M >> D){
//         if(((M*2 + D)%3)==0){
//             cout << "普通" << endl;
//         }else if(((M*2 + D)%3)==1){
//             cout << "吉" << endl;
//         }else if(((M*2 + D)%3)==2){
//             cout << "大吉" << endl;
//         }
//     }
//     return 0;
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int M, D, S;

    while(cin >> M >> D)
    {
        S = (M * 2 + D) % 3;

        if(S == 0)
        {
            cout << "普通" << endl;
        }
        if(S == 1)
        {
            cout << "吉" << endl;
        }
        if(S == 2)
        {
            cout << "大吉" << endl;
        }
    }

    return 0;
}