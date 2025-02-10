#include<iostream>
#include<string>
using namespace std;
int main()
{
    string middleName, petName;
    string alterEgoName;

    cout << "Enter youtmiddle name and the name of your pet.\n";
    cin >> middleName;
    cin >> petName; //string cna't have black between words, or it will stop too early.

    alterEgoName = petName + " " + middleName;
    cout << "The name of your alter ego is ";
    cout << alterEgoName << "."<< endl;

    return 0;
}