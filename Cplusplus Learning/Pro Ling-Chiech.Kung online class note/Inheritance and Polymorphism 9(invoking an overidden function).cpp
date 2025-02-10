#include<iostream>
using namespace std;

class A
{
    public:
        void a() { cout << "a" << endl;}
        void f() { cout << "af" << endl;}
};

class B:public A
{
    public:
        void b() { cout << "b" << endl;}
        void f() { cout << "bf" << endl;}
};

int main()
{
    B b;
    A a=b;
    A* ap = &b;
    a.a();
    a.f();
    ap->a();
    ap->f();

    return 0;
}