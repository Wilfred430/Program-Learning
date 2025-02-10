#include<iostream>
using namespace std;

class Vector
{
    private:
        int n;
        int* m;
    public:
        Vector(); // default constructor
        Vector(int dim, int Value = 0); // constructor
        void print();
};

Vector::Vector()
{
    n = 0;
    m = nullptr;
}

Vector::Vector(int dim, int Value)
{
    n = dim;
    m = new int[dim];
    for(int i=0;i<n;i++)
    {
        m[i] = Value;
    }
}

void Vector::print()
{
    cout << "{" ;
    for(int i=0;i<n-1;i++)
    {
        cout << m[i] << ", ";
    }
    cout << m[n-1] << "}" << endl;
}

int main()
{
    Vector v1 (1);
    Vector v2 (3,8);
    v1.print();
    v2.print();

    return 0;
}