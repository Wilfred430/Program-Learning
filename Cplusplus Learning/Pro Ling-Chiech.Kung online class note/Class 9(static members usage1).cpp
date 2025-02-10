#include<iostream>
using namespace std;

class A
{
    private:
        static int count;
    public:
        A();
        static int getCount();
};

int A::count=0;

A::A()
{
    A::count++; //紀錄有多少object
}
int A::getCount()
{
    return A::count;
}

int main()
{
    A a1, a2, a3;
    cout << A::getCount() << endl;

    return 0;
}