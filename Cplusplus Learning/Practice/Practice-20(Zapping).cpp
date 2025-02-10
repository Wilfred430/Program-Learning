//第一版(-1, -1 那部分有誤，應當用break)

// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;

//     while(cin >> a >> b){
//         if(a>b){
//             if((a-b)<=50){
//                 cout << a-b << endl;
//             }else{
//                 cout << 100-a+b << endl;
//             }
//         }if(a<b){
//              if((b-a)<=50){
//                 cout << b-a << endl;
//             }else{
//                 cout << 100-b+a << endl;
//             }
//         }if((a-b)==0){
//             return 0;
//         }
//     }
// }

//第二版

#include<iostream>
using namespace std;

int main()
{
    int a, b, tmp;
    int ans1, ans2;

    while(cin >> a >> b)
    {
        if(a == -1 && b == -1)
        {
            break;
        }
        if(a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }

        ans1 = b - a;
        ans2 = a + (100 - b);

        if(ans1 < ans2)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }

    return 0;
}