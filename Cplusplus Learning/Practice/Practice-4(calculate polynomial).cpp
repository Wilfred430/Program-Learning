#include<iostream>
using namespace std;

int main(){

    int a, b, c, X;

    while( cin >> a >> b >> c >> X ){
        cout << "ans=" << a * X * X + b * X + c << endl;
    }

    return 0;
}