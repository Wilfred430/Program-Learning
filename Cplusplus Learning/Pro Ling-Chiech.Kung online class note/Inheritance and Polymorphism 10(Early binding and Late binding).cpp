#include<iostream>
using namespace std;

class Parent
{
    protected:
        int x;
        int y;
    public:
        Parent():x(0),y(0) {}
        Parent(int a, int b): x(a), y(b) {}
        virtual void print() { cout << x << " " << y << endl;} 
}; 

class Child: public Parent
{
    private:
        int z;
    public:
        Child(int a,int b,int c): Parent(a,b) {z = c;}
        void print() { cout << z << endl;}
};

// int main()
// {
//     Child c(1,2,3);
//     Parent p=c;
//     p.print();

//     return 0;
// }

int main()
{
    Child c(1,2,3);
    Parent* ptr = &c;
    ptr->print();

    return 0;
}