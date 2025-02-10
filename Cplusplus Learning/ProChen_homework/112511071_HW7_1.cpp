#include<iostream>
#include<fstream>
#include<string>

int main()
{
    using namespace std;

    string m;
    ifstream inStream;
    int i,num,c=0,d;

    inStream.open("input1.txt",ios::in);

    if(inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    while(1)
    {
        cout << "How many lines do you want to see :" ;
        cin >> num;

        d = c;
        c = c + num;

        if(c > 15)
        {
            num = 15 - d;
            for(i = 1;i <= num;i++)
            {
                getline(inStream,m);
                cout << m;
                cout << endl;
            }
            break;
        }else if(c == 15)
        {
            for(i = 1;i <= num;i++)
            {
                getline(inStream,m);
                cout << m;
                cout << endl;
            }
            break;
        }else
        {
            for(i = 1;i <= num;i++)
            {
                getline(inStream,m);
                cout << m;
                cout << endl;
            }
        }
    }

    inStream.close();

    return 0;
}