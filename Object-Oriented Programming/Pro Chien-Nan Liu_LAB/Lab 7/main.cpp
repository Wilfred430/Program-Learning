#include<iostream>
#include<vector>
#include<cmath>
#include"func.h"

using namespace std;

int main()
{
  int x1,x2;
  float x3;
  int t;
  cin >> t;
  PolySeq p1(t);
  for(int i = p1.n-1;i>=0;i--)
  {
    cin >> p1.c[i];
  }
  cin >> t;
  PolySeq p2(t);
  for(int i = p2.n-1;i>=0;i--)
  {
    cin >> p2.c[i];
  }
  cin >> x1 >> x2;
  cin >> x3;
  
  cout << Poly_Int::getValue(p1+p2,x1) << endl;
  cout << Poly_Float::getValue(p1.Derivative(),x3) << endl;
  cout << p2.Integral(x1,x2) << endl;
  
  return 0;
}

namespace Poly_Int{
    int getValue(PolySeq&, int);
}

namespace Poly_Float{
    float getValue(PolySeq&, float);
}