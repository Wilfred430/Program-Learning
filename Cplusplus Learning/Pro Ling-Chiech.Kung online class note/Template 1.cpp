#include<iostream>
#include<string>
using namespace std;

template<typename T>
void print(T a)
{
    cout << a << endl;
}

int main()
{
    print<int>(3);
    print<char>('O');
    print<string>("Hello");

    return 0;
}