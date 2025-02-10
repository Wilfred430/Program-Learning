#include<fstream>
#include<iostream>

using namespace std;


int main()
{
    using namespace std;

    ifstream inStream;
    ofstream outStream;

    inStream.open("C:\\C++ website forth\\Practice\\infile.dat",ios::in);
    outStream.open("C:\\C++ website forth\\Practice\\outfile.dat",ios::out);

    int first, second, third;
    inStream >> first;
    inStream >> second;
    inStream >> third;
    outStream << "The sum of the first 3\n" << "numbers in infile.dat\n" << "is " << (first + second + third) << endl;

    inStream.close();
    outStream.close();

    return 0;
}