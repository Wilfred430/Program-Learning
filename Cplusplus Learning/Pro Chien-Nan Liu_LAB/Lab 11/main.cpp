#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct NODE{
	string type;
	string name;
	NODE *f1, *f2;
};

struct NODECMP {
  bool operator() (NODE *i, NODE *j) { return (i->name < j->name);}
} nodecmp;

void Read_Netlist(string dir, map<string, int> &libsize, vector<NODE*> &allnode)
{
	ifstream input;
  input.open(dir);
  if(input.fail())
  {
    cout << "ERROR!!!" << endl;
    exit(1);
  }
  ////////////////////////////////////
  int Lib;
  input >> Lib;
  string Name;
  int Value;
  
  for(int i=0;i<Lib;i++)
  {
    input >> Name;
    input >> Value;
    libsize.insert(pair<string,int> (Name,Value)); 
  }
  ////////////////////////////////////
  int NodeSize;
  input >> NodeSize;
  string Node;
  for(int i=0;i<NodeSize;i++)
  {
    input >> Node;
    allnode.push_back(new NODE{"",Node,nullptr,nullptr});
  }
  ////////////////////////////////////
  int GateNum;
  input >> GateNum;
  string Gatty, Gat, in1,in2;
  for(int i=0;i<GateNum;i++)
  {
    input >> Gatty >> Gat >> in1 >> in2;
    for(int j=0;j<NodeSize;j++)
    {
      if(allnode[j]->name == Gat)
      {
        allnode[j]->type = Gatty;
        NODE* F1 = new NODE{"",in1,nullptr,nullptr};
        NODE* F2 = new NODE{"",in2,nullptr,nullptr};
        allnode[j]->f1 = F1;
        allnode[j]->f2 = F2;
      }
    }
  } 
}

void TotalFaninSize(map<string, int> &libsize, vector<NODE*> &allnode){
  int Value1,Value2,Sum;
	for(int i=0;i<allnode.size();i++)
  {
    if(allnode[i]->type != "")
    {
      cout << allnode[i]->name << ":";
      if(allnode[i]->f1->name.length() > 1)
      {
        for(int j=0;j<allnode.size();j++)
        {
          if(allnode[i]->f1->name == allnode[j]->name)
          {
            Value1 = libsize[allnode[j]->type];
          }else if(allnode[i]->f2->name == allnode[j]->name)
          {
            Value2 = libsize[allnode[j]->type];
          }
        }
      }else
      {
        Value1 = libsize[allnode[i]->f1->name];
        Value2 = libsize[allnode[i]->f2->name];
      }
      cout << Value1 + Value2 << endl;
    }
  }
}

int main(int argc, char *argv[]){
	// Don't modify
	string dir = argv[1];
	
	map<string, int> libsize;
	vector<NODE*> allnode;
	Read_Netlist(dir, libsize, allnode);	
	
	sort(allnode.begin(), allnode.end(), nodecmp);
	
	for(int i = 0; i < allnode.size(); i++)
		cout << allnode[i]->name << " ";
	cout << endl;
	
	TotalFaninSize(libsize, allnode);
	
	return 0;
}