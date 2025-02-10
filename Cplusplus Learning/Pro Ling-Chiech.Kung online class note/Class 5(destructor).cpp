#include<iostream>
using namespace std;

class Vector
{
    private:
        int n;
        int* m;
    public:
        Vector();
        Vector(int dim, int value = 0);
        void print();
        ~Vector(); // destructor
};

Vector::Vector()
{
    n = 0;
    m = nullptr;
}

Vector::Vector(int dim,int value)
{
    n = dim;
    m = new int[n];
    for(int i=0;i<n;i++)
    {
        m[i] = value;
    }
}

void Vector::print()
{
    cout << "{";
    for(int i=0;i<n-1;i++)
    {
        cout << m[i] << ", ";
    }
    cout << m[n-1] << "}" << endl;
}

Vector::~Vector() // Be used to elimination allocation memory
{
    delete [] m;
}

int main()
{
    Vector v1 (3,5);
    Vector v2 (7,1);
    v1.print();
    v2.print();

    return 0;
}