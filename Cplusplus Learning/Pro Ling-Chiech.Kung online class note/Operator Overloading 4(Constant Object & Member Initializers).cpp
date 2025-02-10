#include<iostream>
using namespace std;

class MyVector
{
    private:
        const int n;
        int* m;
    public:
        MyVector();
        MyVector(int dim, int v[]);
        MyVector(const MyVector& v);
        ~MyVector();
        void print() const; //In order to use constant object, we need to add const to every member functions even if there can't modify class variable.
};

MyVector::MyVector(): n(0), m(nullptr) {} //use class intializers to avoid const class variable.

MyVector::MyVector(int dim,int v[]): n(dim)
{
    m=new int[n];
    for(int i=0;i<n;i++)
    {
        this->m[i]=v[i];
    }
}

MyVector::MyVector(const MyVector& v): n(v.n)
{
    m=new int[n];
    for(int i=0;i<n;i++)
    {
        m[i] = v.m[i];
    }
}

MyVector::~MyVector()
{
    delete [] m;
}

void MyVector::print() const
{
    cout << "(" ;
    for(int i=0;i<n-1;i++)
    {
        cout << m[i] << ",";
    }
    cout << m[n-1] << ")" << endl;
}

int main()
{
    int d[3] = {0,0,0};
    const MyVector Origin_3D(3,d);
    Origin_3D.print();

    return 0; 
}

