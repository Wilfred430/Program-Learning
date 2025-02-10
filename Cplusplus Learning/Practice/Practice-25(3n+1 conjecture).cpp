//第一版

// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;

//     while(N != 1){
//         if((N%2)==0){
//             N = N/2 ;
//         }else{
//             N = 3*N - 1 ;
//         }
//     }
//     cout << "1" << endl;
//     return 0;
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;

    while(N > 1)
    {
        if((N % 2) != 0)
        {
            N = 3 * N + 1 ;
            cout << N << endl;
        }
        if((N % 2) == 0)
        {
            N = N / 2 ;
            cout << N << endl;
        }
    }

    return 0;
}