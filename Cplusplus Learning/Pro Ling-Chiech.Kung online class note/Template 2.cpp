#include<iostream>
using namespace std;

template<class T,class Y>
void Print(T a,Y b)
{
    cout << a << " " << b << endl;
}

int main()
{
    Print("ast",2899);
    Print(4848.585484,2899);
    Print(true,'X');
    
    return 0;
}