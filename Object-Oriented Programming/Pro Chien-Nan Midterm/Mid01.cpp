#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

using namespace std;

int main(int argc, char*argv[])
{
  int n,i,j;
  cin >> n; 
  int** a = new int*[n];
  for(i=0;i<n;i++)
  {
    a[i] = new int[n];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin >> a[i][j];
    }
  }
  int** b = new int*[n];
  for(i=0;i<n;i++)
  {
    b[i] = new int[n];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      b[i][j] = 0;
      if(j-n+1 >= 0)
      {
        b[i][j] = a[j-n+1][i];
      }else
      {
        b[i][j] = a[-1*(j-n+1)][i];
      }
    }
  }
  cout << "Output" << endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<b[i][j] << "\t";              // 3 ,2 1 1 2 , 0 0 2 0, 0 2 0 0, 1 2 0 1 j-n+1
      
    }
    cout << endl;
  }
  
  
  
  for(i=0;i<n;i++)
  {
    delete [] a[i];
    delete [] b[i];
  }
  delete [] a;
  delete [] b;
  
  return 0;
}