#include<iostream>
using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b){
        if ((a%b)==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}