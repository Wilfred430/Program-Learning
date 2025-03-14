#include"money.h"
#include<iostream>

bool operator < (const Money& lhs, const Money& rhs)
{
  if(lhs.allCents < rhs.allCents)
  {
    return true;
  }else
  {
    return false;
  }
}

bool operator <= (const Money& lhs, const Money& rhs)
{
  if(lhs.allCents <= rhs.allCents)
  {
    return true;
  }else
  {
    return false;
  }
}

bool operator > (const Money& lhs, const Money& rhs)
{
  if(lhs.allCents > rhs.allCents)
  {
    return true;
  }else
  {
    return false;
  }
}

bool operator >= (const Money& lhs, const Money& rhs)
{
  if(lhs.allCents >= rhs.allCents)
  {
    return true;
  }else
  {
    return false;
  }
}

Money Money::precent(int precentFigure) const
{
  Money Afpre(*this);
  Afpre.allCents = this->allCents * (0.01) * precentFigure; 
  
  return Afpre;
}
