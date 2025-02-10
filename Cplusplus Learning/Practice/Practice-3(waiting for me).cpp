//第一版
// #include<iostream>
// using namespace std;

// int main(){

//     int time;

//     cin >> time ;

//     cout << time/3600 << " hr " << (time%3600)/60 << " min " << time % 60 << " sec ";

//     return 0;
// }

//第二版
#include<iostream>
using namespace std;

int main()
{
    int N, h, m, s;

    cin >> N;
    
    h = N/3600;
    N = N%3600;

    m = N/60;
    N = N%60;

    s = N;

    cout << h << " hr " << m << " min " << s << " sec " <<endl;

    return 0;
}