#include<iostream>
using namespace std;

class Parent
{
    protected:
        int x;
        int y;
    public:
        Parent(int a, int b): x(a), y(b) {}
        void print();
};

void Parent::print()
{
    cout << x << " " << y << endl;
}

class Child:public Parent
{
    protected:
        int z;
    public:
        Child(int a, int b ,int c): Parent(a,b) { z = c;}
};

int main()
{
    Parent p1(1,2);
    Child c1(3,4,5);
    Parent p2 = c1; // only access child value assign to parent variable
    p2.print();
    c1.print();

    return 0;
}