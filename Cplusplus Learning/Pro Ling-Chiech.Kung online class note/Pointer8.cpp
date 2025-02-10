// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int* ptr = &a;
//     cout << ptr << endl;
//     cout << ++ptr << endl;
//     cout << *ptr << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     double a[3] = {10.5,11.5,12.5};
//     double* ptr = &a[0];
//     cout << *ptr << " " << ptr << endl;
//     ptr = ptr + 2; // point + 2 為記憶體位置下兩格 a[0] -> a[2]
//     cout << *ptr << " " << ptr << endl;
//     ptr--; //a[2] -> a[1]
//     cout << *ptr << " " << ptr << endl;
//     *ptr = *ptr + 5; //a[1] = a[1] + 5
//     cout << a[0] << " " <<  a[1] << " " << a[2];

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     double a[5] = {3.2,5.9,4.7,10.1,88};
//     double* ptr1 = &a[0];
//     double* ptr2 = &a[2];
//     cout << ptr2 - ptr1 << endl;
//     cout << *ptr2 - *ptr1 << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int y[3] = {1,2,3};
//     int* x = y;
//     for(int i = 0;i <3;i++)
//     {
//         cout << *(x+i) << "　";
//     }
//     for(int i = 0;i <3;i++)
//     {
//         cout << *(x++) << "　"; //x++ => x = x + 1 // address has a big change
//     }
//     for(int i ; i <3;i++)
//     {
//         cout << *(x+i) << " ";
//     }
//}

#include<iostream>
using namespace std;

int main()
{
    int a[5] = {0};
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }
    int* ptr = a;
    for(int i=0;i<5;i++)
    {
        *ptr += 3;
        ptr++;
    }
    for(int i=0;i<5;i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}