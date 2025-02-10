#include "func.h"
#include <cmath>
#include <algorithm>
//using namespace std;
PolySeq::PolySeq(int d)
{
    this->n = d;
    this->c = new int[d];
    for(int i=0;i<d;i++){ this->c[i]=0; }
}

PolySeq::PolySeq()
{
n = 0;
c = NULL;
}

PolySeq::~PolySeq()
{
delete [] c;
}

PolySeq& PolySeq::operator+(const PolySeq& rhs) {
int m = max(this->n, rhs.n);
PolySeq *a = new PolySeq(m);
for(int i = 0;i<this->n;i++){
a->c[i] += this->c[i];
}
for(int i = 0;i<rhs.n;i++){
a->c[i] += rhs.c[i];
}
return *a;
}

PolySeq& PolySeq::Derivative() {
    PolySeq *p = new PolySeq(n);
    for(int i = p->n;i>=0;i--){
    p->c[i] = this->c[i+1]*(i+1);
}
return *p;
}
int PolySeq::Integral(int low_bound, int up_bound)
{
double temp = 0.0;
int b = 0;
double a = 0.0;
for(int i = 0;i<(this->n);i++){
a = (this->c[i])/(i+1);
b = pow(up_bound, i+1) - pow(low_bound, i+1);
temp += a*b;
}
return static_cast<int>(temp);

}



int Poly_Int::getValue(PolySeq& a, int b){
    int temp = 0;
    for(int i = 0;i<a.n;i++){
    temp += static_cast<int>(pow(b, i)*a.c[i]);
}
return temp;
}



float Poly_Float::getValue(PolySeq& a, float b){
    float temp = 0.0;
    for(int i = 0;i<a.n;i++){
    temp += pow(b, i)*a.c[i];
}
return temp;
}
