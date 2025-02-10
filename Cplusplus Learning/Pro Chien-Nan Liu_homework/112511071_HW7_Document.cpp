#include"Document.h"
#include<cstring>
#include<cmath>
#include<vector>


Document::Document(){}

Document::Document(Document &doc)
{
  for(int i=0;i < doc.v.size();i++)
  {
    this->v.push_back(doc.v[i]);
  }
}

ostream &operator<<(ostream &out, const Document &doc)
{
  for(int i = 0;i < doc.v.size();i++)
  {  
    out << doc.v[i] << " ";
  }
  return out;
}

int Document::getLength()
{
  int sum=0;
  for(int i=0;i<this->v.size();i++)
  {
    sum += this->v[i].length();
  }
  
  return sum;
}

Document& Document::addString(const string a)
{
  this->v.push_back(a);
  
  return (*this);
}