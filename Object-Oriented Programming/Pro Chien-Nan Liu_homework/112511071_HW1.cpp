#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

void checkFile(ifstream& in, string inFil);

bool oFil = true;

int main()
{
    string inFil, outFil;
    ifstream in;
    ofstream out;
    cout << "Please enter the filename: ";
    cin >> inFil;
    in.open(inFil);
    checkFile(in, inFil);
    if(oFil)
    {
    	string k;
    	int Wn=0, Cn=0, NCn=0, Ln=0;
        cout << "Please enter the output filename: ";
        cin >> outFil;
        out.open(outFil);
        while(in >> k)
		{	
			bool Dwhite = false;
			for(int i=0;i<k.length();i++)
			{
				if((int(k[i])-32) != 0)
				{
					Dwhite = true;
				}
			}
			if(Dwhite)
			{
				Wn++;
			}
		}
		in.close();
		in.open(inFil);
        char c;
        while(in.get(c))
		{
			Cn++;
			if(!isspace(c))
			{
				NCn++;
			}
			if(((int(c)-65)>=0)&&(int(c)-65)<26 || ((int(c)-97)>=0)&&(int(c)-97)<26)
			{
				Ln++;
			}
		}
		cout << "Total number of words: " << Wn << endl;
		cout << "Total number of characters: " << Cn << endl;
		cout << "Total number of non-whitespace characters: " << NCn << endl;
		cout << "Total number of letters: " << Ln << endl;
		
		out << "Total number of characters: " << Cn << endl;
		out << "Total number of non-whitespace characters: " << NCn << endl;
		out << "Total number of letters: " << Ln << endl;
		
		out.close();
    }
    return 0;
}

void checkFile(ifstream& in, string inFil)
{
    if(in.fail())
    {
        cout << "File \"" << inFil << "\" does not exist.";
        oFil = false;
    }
}