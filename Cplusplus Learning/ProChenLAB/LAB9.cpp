#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    ifstream inStream;
    int Size;
    inStream.open("C:\\C++ website forth\\ProChenLAB\\Conv_demo.txt");
    while(1)
    {
        inStream >> Size;
        if(Size == -1)
        {
            break;
        }
        int i,j,a,b,t[Size][Size],m[3][3],k[Size-2][Size-2];

        for(i=0;i <= (Size-1);i++)
        {
            for(j = 0;j <= (Size -1);j++)
            {
                inStream >> t[j][i];
            }
        }
        for(i=0;i <= 2;i++)
        {
            for(j = 0;j <= 2;j++)
            {
                inStream >> m[j][i];
            }
            cout << endl;
        }
        for(i = 0;i <= (Size - 3);i++)
        {
            for(j = 0;j <= (Size - 3);j++)
            {
                k[j][i] = 0;
            }
        }
        for(a = 0;a <= (Size-3);a++)
        {
            for(b = 0;b <= (Size-3);b++)
            {
                for(i = a;i <= (a+2);i++)
                {
                    for(j = b;j <= (b+2);j++)
                    {
                        k[b][a] = k[b][a] + t[j][i]*m[j-b][i-a];
                    }
                }
            }
        }
        cout << "Output:" << endl;
        cout << endl;
        for(i = 0;i <= (Size - 3);i++)
        {
            for(j = 0;j <= (Size - 3);j++)
            {
                cout << setw(4) << k[j][i];
            }
            cout << endl;
        }
    }


    inStream.close();
    return 0;
}
