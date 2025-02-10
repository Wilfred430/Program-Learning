#include"Pairs_operation.h"

Pairs::Pairs()
{
  f=0;
  s=0;
}

Pairs::Pairs(int first)
{
  f = first;
  s = 0;
}

Pairs::Pairs(int first,int second)
{
  f = first;
  s = second;
}

istream& operator >>(istream& in, Pairs & second)
{  char a,b,c;
	in >> a >> second.f >> b >> second.s >> c;
	
	return in;
}

ostream& operator <<(ostream& outs, const Pairs & second)
{
	outs << "(" << second.f << "," << second.s << ")" << endl;
	
	return outs;
}

Pairs Pairs::operator + (const Pairs & obj)
{
	Pairs result(obj);
	result.f += f;
	result.s += s;
	
	return result;
}

Pairs Pairs::operator - (const Pairs & obj)
{
	Pairs result;
	result.f = f - obj.f;
	result.s = s - obj.s;
	
	return result;
}

Pairs Pairs::operator * (int obj)
{
	Pairs result;
	result.f = f*obj;
	result.s = s*obj;
	
	return result;
}