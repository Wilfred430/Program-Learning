#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

int main()
{

    ifstream inStream;
    string m;
    char n;
    int i=0;

    inStream.open("input1.txt"); /*C:\\C++ website forth\\ProChen_homework\\*/

    if(inStream.fail())
    {
        cout << "The file doesn't open" << endl;
        exit(1);
    }

    while(1)
    {
        getline(cin, m);
        if(m == "12345")
        {
            break;
        }
        while(!inStream.eof())
        {
            inStream.get(n);
            if(n == '\n')
            {
                cout << endl;
                break;
            }else if(n == '#')
            {
                cout << rand() ;
            }else if(n == 'N')
            {
                continue;
            }else
            {
                cout << n;
            }
        }
        i++;
        if(i == 8)
        {
            inStream.close();
            inStream.open("C:\\C++ website forth\\ProChen_homework\\input1.txt");
        }
    }

    inStream.close();

    return 0;
}