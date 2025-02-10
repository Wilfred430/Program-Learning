//第一版
// #include<iostream>
// using namespace std;

// int main(){
    
//     int MrMingtall;
//     cout << "Please enter the tall of MrMing: ";
//     cin >> MrMingtall;

//     if(MrMingtall>185){
//         cout << "Congratulation! You have the tall which you dream of~";
//     }
//     else if(MrMingtall<185){
//         cout << "Unfortunately...You have the gap from " << 185-MrMingtall << " to 185"; 
//     }

//     return 0;
// }

//解答(第二版)
#include<iostream>
using namespace std;

int main(){

    int tall;

    cin >> tall;

    cout << "你還差 " << 185 - tall << " cm" << endl;

    return 0;
}