#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    char m;
    string n;
    int i=1;
    ifstream inStream;

    inStream.open("input2.txt"); /*C:\\C++ website forth\\ProChen_homework\\*/

    while(!inStream.eof())
    {
        cout << setw(2) << i << " : ";
        i++;
        while(1)
        {
            inStream.get(m);
            if(m == ' ')
            {
                continue;
            }else
            {
                cout << m;
                break;
            }
        }
        getline(inStream,n);
        cout << n << endl;
    }

    inStream.close();

    return 0;
}