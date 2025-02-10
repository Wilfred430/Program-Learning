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

MyVector::~MyVector()
{
    delete [] m;
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
        void print();
};

MyVector2D::MyVector2D()
{
    this->n = 2;
}

MyVector2D::MyVector2D(double m[]): MyVector(2,m) {}

void MyVector2D::print()
{   
    cout << "2D: ";
    for(int i=0;i<this->n;i++)
    {
        cout << this->m[i] << " ";
    }
    cout << endl;
}

class NNVector2D:public MyVector2D
{
    public:
        NNVector2D();
        NNVector2D(double m[]);
        void setValue(double i1,double i2);
};

NNVector2D::NNVector2D(){}

NNVector2D::NNVector2D(double m[])
{
    this->m = new double[2];
    this->m[0] = m[0] >= 0 ? m[0] :0;
    this->m[1] = m[1] >= 0 ? m[1] :0;
}

void NNVector2D::setValue(double i1,double i2)
{
    if(this->m == nullptr)
    {
        this->m[0] = i1 >= 0 ? i1:0;
        this->m[1] = i2 >= 0 ? i2:0;
    }
}

int main()
{
    double i[2] = {1,2};
    MyVector2D v(i);
    v.print();

    return 0;
}