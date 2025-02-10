#include<iostream>
using namespace std;

class Vector
{
    private:
        int n;
    public:
        int* m;
        void init(int dim);
        void print();
        void interchange(int ID1, int ID2);
        void alternating(int ID, int Value);
};

void Vector::init(int dim)
{
    n = dim;
    m = new  int[n];
    for(int i=0;i<n;i++)
    {
        m[i] = 0;
    }
}

void Vector::print()
{
    cout << "( ";
    for(int i=0;i<n-1;i++)
    {
        cout << m[i] << ", ";
    }
    cout << m[n-1] << " )" << endl;
}

void Vector::interchange(int ID1, int ID2)
{
    int tmp;
    tmp = m[ID1-1];
    m[ID1-1] = m[ID2-1];
    m[ID2-1] = tmp;
}

void Vector::alternating(int ID, int Value)
{
    m[ID-1] = Value;
}

int main()
{
    Vector v;
    v.init(5);
    v.print();
    v.alternating(3,5);
    v.print();
    v.alternating(1,7);
    v.print();
    v.interchange(1,3);
    v.print();
    return 0;
}