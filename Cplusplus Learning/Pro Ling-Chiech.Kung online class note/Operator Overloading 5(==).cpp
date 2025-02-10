#include<iostream>
#include<cstring>

using namespace std;

class MyVector
{
    private:
        int n;
        double* m;
    public:
        MyVector();
        MyVector(int dim, double m[]);
        MyVector(const MyVector& v);
        ~MyVector();
        bool operator==(const MyVector& v);
};

MyVector::MyVector()
{
    n=0;
    m=nullptr;
}

MyVector::MyVector(int dim, double m[])
{
    this->n=dim;
    this->m=new double[dim];
    for(int i=0;i<dim;i++)
    {
        this->m[i] = m[i];
    }
}

MyVector::MyVector(const MyVector& v)
{
    this->n=v.n;
    this->m=new double[v.n];
    for(int i=0;i<v.n;i++)
    {
        this->m[i]=v.m[i];
    }
}

MyVector::~MyVector()
{
    delete [] m;
}

bool MyVector::operator==(const MyVector& v)
{
    if(this->n != v.n)
    {
        return false;
    }else
    {
        for(int i=0;i<this->n;i++)
        {
            if(this->m[i] != v.m[i])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    double d1[5] ={1,2,3,4,5};
    MyVector a1(5,d1);
    
    double d2[4]={1,2,3,4};
    MyVector a2(4,d2);
    MyVector a3(a1);

    // cout << (a1 == a2 ? "Y":"N") << endl;
    // cout << (a1 == a3 ? "Y":"N") << endl;

    cout << (a1.operator==(a2) ? "Y":"N") << endl;
    cout << (a1.operator==(a3) ? "Y":"N") << endl;

    return 0;
}