#include<iostream>
using namespace std;

class MyVector
{
    protected:
        int n;
        double* m;
    public:
        MyVector();
        MyVector(int dim,double a[]);
        MyVector(const MyVector& v);
        ~MyVector();
        void print() const;
};

MyVector::MyVector():n(0),m(nullptr) {}

MyVector::MyVector(int dim,double a[])
{
    this->n = dim;
    this->m = new double[dim];
    for(int i=0;i<dim;i++)
    {
        this->m[i] = a[i];
    }
}

MyVector::MyVector(const MyVector& v)
{
    this->n = v.n;
    for(int i=0;i<this->n;i++)
    {
        this->m[i] = v.m[i];
    }
}

void MyVector::print() const
{
    for(int i=0;i<this->n;i++)
    {
        cout << this->m[i] << " ";
    }
    cout << endl;
}

class MyVector2D: public MyVector
{
    public:
        MyVector2D();
        MyVector2D(double m[]);
};

MyVector2D::MyVector2D()
{
    this->n = 2;
}

MyVector2D::MyVector2D(double m[]): MyVector(2,m) {}

int main()
{
    double i[2] = {1,2};
    MyVector2D v(i);
    v.print();

    return 0;
}
