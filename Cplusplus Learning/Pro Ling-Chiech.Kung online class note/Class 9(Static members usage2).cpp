#include<iostream>
using namespace std;

class B
{
    private:
        static int Count;
    public:
        B() { B::Count++; }
        ~B() { B::Count--;}
        static int getCount() { return B::Count;}
};

int B::Count=0;

int main()
{
    if(1)
    {
        B b, c, d , e, f;
    }
    cout << B::getCount() << endl;

    return 0;
}