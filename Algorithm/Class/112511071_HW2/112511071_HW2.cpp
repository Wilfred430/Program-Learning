#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("data.txt");
    if(in.fail())
    {
        cout << "Can't open the data. \n";
        exit(1);
    }
}