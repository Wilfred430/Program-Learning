#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;
    int i,m[5][5],n,j,total=0;

    inStream.open("C:\\C++ website forth\\ProChenLAB\\input7.txt");
    outStream.open("C:\\C++ website forth\\ProChenLAB\\output7.txt");

    for(j = 0;j <= 4;j++)
    {
        for(i = 0;i <= 4;i++)
        {
            inStream >> n;
            m[i][j] = n;
        }
    }
    for(j = 0;j <= 4;j++)
    {
        for(i = 0;i <= 4;i++)
        {
            outStream << setw(5) << m[j][i];
            total = total + m[j][i] * m[j][i];
        }
        outStream << "  : " << total;
        outStream << endl;
        total = 0;
    }

    inStream.close();
    outStream.close();
}