#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        void f() {  cout << this << endl;   };
        A* g() {    return this;    };
};

int main()
{
    A obj;
    cout << &obj << endl;
    obj.f();
    cout << (&obj == obj.g()) << endl;

    return 0;
}