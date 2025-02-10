//第一版

// #include<iostream>
// using namespace std;

// int main(){

//     int v, t;

//     while(cin >> v >> t){
//         cout << 2*v*2*t*(1/2.0) << endl;
//     }
// }

//第二版
//introduction: S = 1/2*V*t but when t=2t ; a = V/t ; a = xV/2t ; x = 2 ; revise formula: 1/2*2V*2t = 2Vt

#include<iostream>
using namespace std;

int main()
{
    int v, t;

    while(cin >> v >> t)
    {
        cout << 2 * v * t << endl;
    }

    return 0;
}