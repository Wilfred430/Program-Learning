//normal used to global function or another class
#include<iostream>
using namespace std;

class Myvector
{
    private:
        int N;
    public:
        friend void Test();
        friend class test;
};

void Test()
{
    Myvector v;
    v.N = 100;
    cout << v.N << endl;
}

class test
{
    public:
        void Test(Myvector v)
        {
            v.N = 200;
            cout << v.N << endl;
        }
};

int main()
{
    test a;
    Test();

    return 0;
}