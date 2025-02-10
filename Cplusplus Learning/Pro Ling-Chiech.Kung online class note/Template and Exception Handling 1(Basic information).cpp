#include<iostream>
using namespace std;

/*
template<typename T>
void f(T t)
{
    cout << t << endl;
}

int main()
{
    f<double>(1.2);
    f<int>(1.2);

    return 0;
}*/

template<typename A,typename B>
void g(A a,B b)
{
    cout << a+b << endl;
}

int main()
{
    g<double, int>(1.7,1.2);

    return 0;
}