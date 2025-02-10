#include<iostream>
using namespace std;

class Myvector
{
    private:
        int scalar;
        int X;
    public:
        Myvector(int Scalar,int x);
        void print();
};

Myvector::Myvector(int Scalar,int x)
{
    scalar = Scalar;
    X = x;
}

void Myvector::print()
{
    cout << X*scalar << endl;
}

int main()
{
    Myvector a(5,6);
    Myvector* Pta = &a;
    (*Pta).print();
    Pta->print();

    return 0;
}