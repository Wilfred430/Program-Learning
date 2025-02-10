#include<iostream>
using namespace std;

class A
{
    private:
        int i;
    public:
        A() { cout << "A"; }
        A(const A& a){ cout << "a" ; }
};

void f(A a1, A a2, A a3)
{
    A a4;
}

int main()
{
    A a1,a2,a3;
    cout << endl;
    cout << "......." << endl;
    f(a1,a2,a3);

    return 0;
}