#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    using namespace std;

    ifstream inStream;

    void wordLengthCal(ifstream& inStream);

    wordLengthCal(inStream);

    return 0;
}

void wordLengthCal(ifstream& inStream)
{
    char t[100];
    string m;
    double d=0,j=0;
    double h;
    int i=0;

    inStream.open("input2.txt",ios::in);
    
    while(1)
    {
        inStream >> t[i];
        if(t[i] == '.')
        {
            break;
        }else if(t[i] == ',' || t[i] == ' ' || t[i] == '.')
        {
            continue;
        }else
        {
            d++;
        }
        i++;
    }
    
    inStream.close();

    inStream.open("input2.txt",ios::in);
    
    while(!inStream.eof())
    {
        inStream >> m;
        j++;
    }
    h  = d / j;

    cout << h;

    inStream.close();

    return;
}