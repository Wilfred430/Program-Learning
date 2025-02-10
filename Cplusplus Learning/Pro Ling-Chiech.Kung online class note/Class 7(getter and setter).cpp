#include<iostream>
using namespace std;

class Myvector
{
    private:
        int N;
        int*m;
    public:
        int getN();
        void setN(int v);
};

int Myvector::getN()
{
    return N;
}

void Myvector::setN(int v)
{
    N = v;
}

int main()
{
    Myvector a;
    a.setN(6);
    cout << a.getN() << endl;

    return 0;
}