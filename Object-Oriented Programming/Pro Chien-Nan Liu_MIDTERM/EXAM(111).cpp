#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    GCD(b, a%b);
}

int main(int argc, char* argv[]){
  int n1, n2;
  cin >> n1 >> n2;
  int k;
  k = GCD(n1,n2);
  cout << "LCM(" << n1 << "," << n2 << ")="<<endl;
  cout << ((n1 * n2) / k) << endl;

  return 0;
}
