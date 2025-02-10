// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=10;
//     int* aPtr = &a;

//     cout << a << endl;
//     cout << aPtr << endl;
//     cout << &a << endl;
//     cout << &aPtr << endl;
//     cout << *aPtr << endl;
//     cout << *(&a) << endl;
//     cout << &(*a) << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int* aPtr = &a;
//     cout << *aPtr << endl;
//     *aPtr = 5;
//     cout << a << endl;
//     a = 10;
//     cout << *aPtr << endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int* ptr1;
//     int* ptr2;
//     ptr1 = ptr2 = &a;
//     cout << *ptr1 << endl;
//     *ptr2 = 5;
//     cout << *ptr1 << endl;
//     (*ptr1)++;
//     cout << *ptr2 << endl << a << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int* p2 = nullptr;
//     cout << p2 << endl;
//     cout << &p2 << endl;
//     cout << *p2 << endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int* aptr;
//     int a = 10;
//     aptr = &a;
//     cout << *(&aptr) << endl;
//     cout << &a << endl;
//     cout << &(*aptr) << endl;

//     return 0;
// }