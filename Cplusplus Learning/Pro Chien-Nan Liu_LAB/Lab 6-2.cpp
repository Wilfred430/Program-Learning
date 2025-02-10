#include "polynomial.h"
#include<cmath>

void PolySeq::setDegree(int d)
{
    this->highest_degree = d;
    this->c = new double[this->highest_degree + 1];
    for(int i=0;i<=this->highest_degree;i++){ this->c[i]=0; }
}

void PolySeq::setCoeff(int exp, double coef)
{
    c[exp] = coef;
}

PolySeq::~PolySeq()
{
    delete [] c;
}

const double PolySeq::getValue(double x)
{
	double sum = 0;
	
	for(int i=this->highest_degree;i>=0;i--)
	{
		sum = sum + this->c[i] * pow(x,i);
	}
    return sum;
}

istream &operator>>(istream &in, PolySeq &poly)
{  
  for(int i = poly.highest_degree;i>=0;i--)
	{
		in >> poly.c[i];
	}
    return in;
}

ostream &operator<<(ostream &out, const PolySeq &poly)
{
  return out;
}

PolySeq& PolySeq::operator=(const PolySeq &rhs)
{	
	(*this).c = new double[rhs.highest_degree+1];
	this->highest_degree = rhs.highest_degree;
  	for(int i=this->highest_degree;i>=0;i--)
  	{
    	this->c[i] = rhs.c[i];
  	}
  
	return (*this);
}

const PolySeq operator+(const PolySeq &lhs, const PolySeq &rhs)
{
	PolySeq P3;
    if(lhs.highest_degree >= rhs.highest_degree)
	{
		P3.c = new double[lhs.highest_degree+1];
		P3.highest_degree = lhs.highest_degree;
		for(int i=P3.highest_degree;i>=0;i--)
		{
			if(i <= rhs.highest_degree)
			{
				P3.c[i] = lhs.c[i] + rhs.c[i];
			}else
			{
				P3.c[i] = lhs.c[i];
			}
		}
	}else
	{
		P3.c = new double[rhs.highest_degree+1];
		P3.highest_degree = rhs.highest_degree;
		for(int i=P3.highest_degree;i>=0;i--)
		{
			if(i <= lhs.highest_degree)
			{
				P3.c[i] = lhs.c[i] + rhs.c[i];
			}else
			{
				P3.c[i] = rhs.c[i];
			}
		}
	}
	
	return P3;
}

const PolySeq operator*(const PolySeq &lhs, const PolySeq &rhs)
{
    PolySeq P3;
    P3.highest_degree = lhs.highest_degree + rhs.highest_degree;
    P3.c = new double[P3.highest_degree + 1];
    for(int i=P3.highest_degree;i>=0;i--)
    {
      P3.c[i] = 0;
    }
    for(int i=lhs.highest_degree;i>=0;i--)
    {
      for(int j=rhs.highest_degree;j>=0;j--)
      {
        P3.c[i+j] += lhs.c[i]*rhs.c[j];
      }
    }
    return P3;
}

const PolySeq PolySeq::Derivative()
{
    PolySeq P3;
    P3.highest_degree = this->highest_degree-1;
    P3.c = new double[this->highest_degree];
    for(int i=P3.highest_degree;i>=0;i--)
	{
		P3.c[i] = this->c[i+1]*(i+1);
	}
	
	return P3;
}

const double PolySeq::Integral(int up_bound, int low_bound)
{
	PolySeq P3;
	P3.highest_degree = this->highest_degree + 1;
	P3.c = new double[P3.highest_degree + 1];
	for(int i=P3.highest_degree;i>=1;i--)
	{
		P3.c[i] = (this->c[i-1])/(i);
	}
	P3.c[0] = 0;
	double LS=0,RS=0;
	for(int i=P3.highest_degree;i>=1;i--)
	{
		LS += P3.c[i]*pow(up_bound,i);
		RS += P3.c[i]*pow(low_bound,i);
	}
	
    return LS-RS;
}