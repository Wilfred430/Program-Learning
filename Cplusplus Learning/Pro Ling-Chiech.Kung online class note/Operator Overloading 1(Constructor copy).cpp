#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class MyVector
{
    private:
        int n;
        double* m;
    public:
        MyVector();
        MyVector(int dim, double v[]);
        MyVector(const MyVector& v);
        ~MyVector();
        void print();
};

MyVector::MyVector()
{
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int dim, double v[])
{
    n = dim;
    m = new double[dim];
    for(int i=0;i<dim;i++)
    {
        m[i] = v[i];
    }
}

MyVector::MyVector(const MyVector& v)
{
    this->n = v.n;
    this->m = new double[v.n];
    for(int i=0;i<this->n;i++)
    {
        this->m[i] = v.m[i];
    }
}

MyVector::~MyVector()
{
    delete [] m;
}

void MyVector::print()
{
    cout << "( ";
    for(int i=0;i<this->n-1;i++)
    {
        cout << this->m[i] << ",";
    }
    cout << this->m[this->n-1] << " )" << endl;
}

int main()
{
    double v[3];
    v[0]=0;
    v[1]=2;
    v[2]=5;
    int n=3;
    MyVector V(n,v);
    V.print();
    MyVector B(V);
    B.print();

    return 0;
}
