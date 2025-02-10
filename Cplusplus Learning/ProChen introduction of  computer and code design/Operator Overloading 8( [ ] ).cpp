#include<iostream>
#include<cstdlib>
using namespace std;

class MyVector
{
    private:
        int n;
        int* m;
    public:
        MyVector();
        MyVector(int dim, int v[]);
        ~MyVector();
        int operator[](int i) const;
        int& operator[](int i);
};

MyVector::MyVector(): n(0), m(nullptr) {}

MyVector::MyVector(int dim, int v[]):n(dim)
{
    this->m=new int[n];
    for(int i=0;i<n;i++)
    {
        this->m[i] = v[i];
    }
}

MyVector::~MyVector()
{
    delete []m;
}

int MyVector::operator[](int i) const
{
    if(i<0 || i >= n)
    {
        exit(1);
    }
    return m[i];
}

int& MyVector::operator[](int i)
{
    if(i<0 || i >= n)
    {
        exit(1);
    }
    return m[i];
}

int main()
{
    int v[5] = {1,2,3,4,5};
    MyVector a(5,v);
    cout << a[1] << endl;
    a[1] = 4;
    cout << a[1] << endl;

    return 0;
}

