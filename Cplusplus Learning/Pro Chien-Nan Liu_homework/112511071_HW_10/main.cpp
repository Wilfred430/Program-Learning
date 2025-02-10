#include<iostream>
#include<vector>
#include"organism.h"
using namespace std;

int main()
{
  int x,y,i,j;
  int count = 1;
  char Command;
  char** map = new char*[5];
  for(i=0;i<5;i++)
  {
    map[i] = new char[5];
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      map[i][j] = '-';
    }
  }
  cin >> x >> y;
  Doodlebug D(x,y);
  map[x][y] = 'x';
  
  vector<Ant> ant[3];
  for(i=0;i<3;i++)
  {
    cin >> x >> y;
    ant[i].setCoordinate(x,y);
    map[x][y] = 'o';
  }

  cout << "----time0----" << endl;
  for(j=4;j>=0;j--)
  {
    for(i=0;i<5;i++)
    {
      cout << map[i][j];
    }
    cout << endl;
  }
  while(cin >> Command)
  {
    if(Command == 'q')
    {
      break;
    }else if(Command == 'n')
    {
      cout << "----time" << count << "----" << endl;
      D.move(ant,map);
      for(i=2;i>=0;i--)
      {
        if(ant[i].GetLive())
        {
          ant[i].move(map);
        }
      }  
      for(j=4;j>=0;j--)
      {
        for(i=0;i<5;i++)
        {
          cout << map[i][j];
        }
        cout << endl;
      }
      count++;
    }
  }
  
  for(i= 0;i< 5;i++)
  {
    delete [] map[i];
  }
  delete [] map;
  
  return 0;
}