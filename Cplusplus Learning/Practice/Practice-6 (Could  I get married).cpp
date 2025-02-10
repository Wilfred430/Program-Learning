#include<iostream>
using namespace std;

int main()
{
    int sex, age;

    while(cin >> sex >> age){
        if(sex==1 && age >= 18){
            cout << "You are marriageable" << endl;
        }else if(sex==1 && age < 18){
            cout << "You are not marriageable" << endl;
        }
        if(sex==2 && age >= 16){
            cout << "You are marriageable" << endl;
        }else if (sex==2 && age <16){
            cout << "You are not marriageable" << endl;
        }
    }

    return 0;
}