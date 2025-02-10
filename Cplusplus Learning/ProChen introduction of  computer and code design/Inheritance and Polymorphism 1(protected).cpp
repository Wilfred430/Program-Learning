#include<iostream>
#include<vector>

class Myvector
{
    protected: // protected can be use by itself and successors.
        int n;
        double* m;
    public:
        Myvector();
        Myvector(int n,double m[]);
        Myvector(const Myvector& v);
        ~Myvector();
        coid print() const;
};

class Myvector2D: public Myvector
{
    public:
        Myvector2D();
        Myvector2D(double m[]);
};

Myvector2D::Myvector2D()
{
    this->n = 2;
}

Myvector2D::Myvector2D(double m[]): Myvector(2,m)
{

}