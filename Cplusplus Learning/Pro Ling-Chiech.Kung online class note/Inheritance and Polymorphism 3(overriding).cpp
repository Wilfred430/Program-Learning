//overriding (redefined child member function which is defined in parent class)

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

void MyVector2D::print() //redefined member function
{   
    cout << "2D: ";
    for(int i=0;i<this->n;i++)
    {
        cout << this->m[i] << " ";
    }
    cout << endl;
}

int main()
{
    double i[2] = {1,2};
    MyVector2D v(i);
    v.print();

    return 0;
}