#include <iostream>
#include <cstring>
#include <fstream>
#include<vector>

using namespace std;

#ifndef _DOCUMENT_H_
#define _DOCUMENT_H_
class Document
{
  public:
    Document();
    Document(Document& doc);
    Document& addString(const string a);
    friend ostream &operator<<(ostream &out, const Document &doc);
    int getLength();
  private:
    vector<string> v;
};

#endif
