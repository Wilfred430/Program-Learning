#include<iostream>
using namespace std;

struct Vector
{
	int n;
	int* m;
	void init(int dim);
	void print(int dim);
};

void Vector::init(int dim)
{
	m = new int[dim];
	for(int i=0;i<dim;i++)
	{
		m[i] = 0;
	}
}

void Vector::print(int dim)
{
	cout << "(" ;
	for(int i=0;i<dim-1;i++)
	{
		cout << m[i] << ", ";
	}
	cout << m[dim-1] << ")" << endl;

	delete [] m;
}

int main()
{
	Vector v;
	v.init(5);
	v.print(5);

	return 0;
}
