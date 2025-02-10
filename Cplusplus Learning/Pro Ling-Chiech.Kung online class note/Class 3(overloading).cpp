#include<iostream>
using namespace std;

class Vector
{
    private:
        int n;
        int* m;
    public:
        void init();
        void init(int dim);
        void init(int dim, int Value);
        void print();
};

void Vector::init()
{
    n=0;
    m = nullptr;
}

void Vector::init(int dim)
{
    init(dim,0);
}

void Vector::init(int dim, int Value)
{
    n = dim;
    m = new int[n];
    for(int i=0;i<n;i++)
    {
        m[i] = Value;
    }
}

void Vector::print()
{
	cout << "(" ;
	for(int i=0;i<n-1;i++)
	{
		cout << m[i] << ", ";
	}
	cout << m[n-1] << ")" << endl;

	delete [] m;
}

int main()
{
    Vector v;
	v.init(5);
	v.print();

    return 0;
}