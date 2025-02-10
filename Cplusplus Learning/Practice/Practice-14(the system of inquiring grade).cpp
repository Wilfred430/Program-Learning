//第一版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, N, M, num[105], seat;

//     cin >> N >> M;
//     for(i = 1; i <= N; i = i + 1)
//     {
//         cin >> num[i];
//     }
//     i = 0;
//     while(cin >> i )
//     {
//         cout << num[i] << endl;
//     }

//     return 0;

// }

//第二版

// #include<iostream>
// using namespace std;

// int main()
// {
//     int N, M;
//     int grade[105];
    
//     int i, x;

//     cin >> N >> M;
//     int chaxun[N];
//     for (int i=0;i<N;i++){
//         cin>>grade[i];
//     }
//     for (i=0;i<M;i++){
//         cin>>chaxun[i];
//     }
//     for (i=0;i<M;i++){
//         cout<<grade[chaxun[i]-1]<<endl;
//     }

//     return 0;
// }

//第三版

#include<iostream>
using namespace std;

int main()
{
    int N, grade[105], M, i, x;

    cin >> N >> M;
    i = 1;
    while(i <= N)
    {
        cin >> grade[i];
        i = i + 1;
    }

    i = 1;
    while(i <= M)
    {
        cin >> x;
        cout << grade[x] << endl;
        i = i + 1;
    }

}