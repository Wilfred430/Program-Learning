#include<iostream>
using namespace std;

class A
{
    public:
        A() {cout << "A" << endl;}
        ~A() {cout << "a" << endl;}
};

class B
{
    private:
        A a;
    public:
        B() {cout << "B" << endl;}
        ~B() {cout << "b" << endl;}
};

int main()
{
    B b;

    return 0;

}