//第一版
// #include<iostream>
// using namespace std;

// int main(){
    
//     int a, b, c;

//     while(cin >> a >> b >> c){
//         if(a >= b >= c){
//             if((b + c) > a){
//                 cout << "Yes" << endl;
//             }else if((b + c) <= a){
//                 cout << "No" << endl;
//             }
//         } 
//         if(b >= a >= c){
//             if((a + c) > b){
//                 cout << "Yes" << endl;
//             }else if((a + c) <= b){
//                 cout << "No" << endl;
//             }
//         }
//         if(c >= b >= a){
//             if((b + a) > c){
//                 cout << "Yes" << endl;
//             }else if((b + a) <= c){
//                 cout << "No" << endl;
//             }
//         }
//         if(c >= a >= b){
//             if((b + a) > c){
//                 cout << "Yes" << endl;
//             }else if((b + a) <= c){
//                 cout << "No" << endl;
//             }
//         }
//         if(a >= c >= b){
//             if((b + c) > a){
//                 cout << "Yes" << endl;
//             }else if((b + c) <= a){
//                 cout << "No" << endl;
//             }
//         }
//         if(b >= c >= a){
//             if((a + c) > b){
//                 cout << "Yes" << endl;
//             }else if((a + c) <= b){
//                 cout << "No" << endl;
//             }
//         }

//     }

//     return 0;
// }

//第二版
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    while(cin >> a >> b >> c)
    {
        if(a+b>c and a+c>b and b+c>a)
        {
            cout <<"Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

//不能用and不然非三角形也為判斷成Yes