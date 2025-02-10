#include<iostream>
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
  map[x][y] = 'x';
  cin >> x >> y;
  map[x][y] = 'o';
  cin >> x >> y;
  map[x][y] = 'o';
  cin >> x >> y;
  map[x][y] = 'o';
  
  cout << "----time0----" << endl;
  for(j=4;j>=0;j--)
  {
    for(i=0;i<5;i++)
    {
      cout << map[i][j];
    }
    cout << endl;
  }

  return 0;
}