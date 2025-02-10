//第一版

// #include<iostream>
// using namespace std;

// int main(){
//     int Q;

//     while(cin >> Q){
//         if(Q <= 10){
//             cout << Q * 6 << endl;
//         }else if( 10 < Q && Q <= 20){
//             cout << (Q - 10) * 2+ ( Q - Q%10) * 6 << endl;
//         }else if( 20 < Q && Q <= 40 ){
//             cout << 60+20+(Q-20) << endl;
//         }else if(Q > 40){
//             cout << "100" << endl;
//         }
//     }
//     return 0;
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;
    if(0 <= N && N <= 10)
    {
        cout << 6 * N << endl;
    }
    if(11 <= N && N <= 20)
    {
        cout << 60 + (N - 10) * 2 << endl;
    }
    if(21 <= N && N <= 40)
    {
        cout << 80+(N-20) << endl;
    }
    if(N > 40)
    {
        cout << "100" << endl;
    }
}