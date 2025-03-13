#include "Lab5_operator.h"

const Complex Complex::operator+(const Complex &rhs)
{
    Complex result(rhs);
    result.re += re;
	result.im += im;
	
	return result; 
}

const Complex operator-(const Complex &lhs, const Complex &rhs)
{
    Complex result(lhs);
    result.re -= rhs.re;
    result.im -= rhs.im;
    
    return result;
}

const Complex Complex::operator*(const Complex &rhs)
{
    Complex result(rhs),fin;
   	fin.re = (result.re * re - result.im * im);
	fin.im = (result.im * re + result.re * im);
    
    return fin;
}

const Complex operator!(const Complex &c)
{
    Complex result;
    result.re = c.re;
    result.im = -c.im;
    
    return result;
}

bool operator==(const Complex &lhs, const Complex &rhs)
{
    if((lhs.re == rhs.re) && (lhs.im == lhs.im))
	{
		return true;
	}else
	{
		return false;
	}
}

bool Complex::operator!=(const Complex &rhs)
{
  if((re != rhs.re) || (rhs.im != im))
	{
		return true;
	}else
	{
		return false;
	}
}

ostream &operator<<(ostream &out, const Complex &rhs)
{
	if(rhs.im >= 0)
	{
		out << rhs.re << "+" << rhs.im << "i";
	}else
	{
		out << rhs.re << rhs.im << "i";
	}
    return out;
}

istream &operator>>(istream &in, Complex &rhs)
{
    in >> rhs.re >> rhs.im;
    
    return in;
}

Complex::Complex(double r, double i) : re(r), im(i) {}