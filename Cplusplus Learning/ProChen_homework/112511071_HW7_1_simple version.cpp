#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    using namespace std;
    ifstream inStream;
    string n;
    int d,t=0,i,j,h=0;

    inStream.open("input1.txt",ios::in);

    if(inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    while(1)
    {
        cout << "How many lines do you want to see :";
        cin >> d;
        if(d == 0)
        {
            break;
        }else
        {
            getline(cin,n);
            for(i = 0;i < 4*d;i++)
            {
                if(i % 4 == 0 && i != 0)
                {
                    cout << endl;
                }
                inStream >> n;
                if(n == "15.")
                {
                    cout << n;
                    h = 1;
                    break;
                }
                cout << n  << " ";
            }
            cout << endl;
        }
        if(h == 1)
        {
            break;
        }
    }

    inStream.close();
    return 0;
}
