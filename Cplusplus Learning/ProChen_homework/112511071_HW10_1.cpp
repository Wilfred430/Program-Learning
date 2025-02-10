#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;
    int i,j,a,b,Time;
    char m[7][5],k[2];

    inStream.open("input1.txt"); /*C:\\C++ website forth\\ProChen_homework\\*/
    outStream.open("output1.txt");

    if(inStream.fail())
    {
        exit(1);
    }
        for(i=0;i<=6;i++)
        {
            if(i==0)
                m[0][0]='1';
            if(i==1)
                m[1][0]='2';
            if(i==2)
                m[2][0]='3';
            if(i==3)
                m[3][0]='4';
            if(i==4)
                m[4][0]='5';
            if(i==5)
                m[5][0]='6';
            if(i==6)
                m[6][0]='7';
            for(j=1;j<=4;j++)
            {
                if(j==1)
                    m[i][1]='A';
                if(j==2)
                    m[i][2]='B';
                if(j==3)
                    m[i][3]='C';
                if(j==4)
                    m[i][4]='D';
                
            }
        }
        for(i=0;i<=6;i++)
        {
            for(j=0;j<=4;j++)
            {
                outStream << m[i][j] << " ";
            }
            outStream << endl;
        }
        outStream << endl;
        while(1)
        {
            Time = 0;
            for(i=0;i<=6;i++)
            {
                for(j=1;j<=4;j++)
                {
                    if(m[i][j] == 'X')
                    {
                        Time++;
                    }
                }
            }
            if(Time == 28)
            {
                outStream << "All seats are occupied!" << endl;
                break;
            }
            outStream << "Please choose a seat: ";
            for(i=0;i<=1;i++)
            {
                inStream >> k[i];
            }
            if(k[0] == 'E')
            {
                outStream << "END" << endl;
                outStream << "End of choosing the seat." << endl;
                break;
            }
            for(i=0;i<=1;i++)
            {
                outStream << k[i];
            }
            outStream << endl;
            switch(k[0])
            {
                case '1':
                    a = 0;
                    break;
                case '2':
                    a = 1;
                    break;
                case '3':
                    a = 2;
                    break;
                case '4':
                    a = 3;
                    break;
                case '5':
                    a = 4;
                    break;
                case '6':
                    a = 5;
                    break;
                case '7':
                    a = 6;
                    break;
            }
            switch(k[1])
            {
                case 'A':
                    b=1;
                    break;
                case 'B':
                    b=2;
                    break;
                case 'C':
                    b=3;
                    break;
                case 'D':
                    b=4;
                    break;
            }
            if(m[a][b] == 'X')
            {
                outStream << "The seat is already occupied, please choose another seat." << endl;
                outStream << endl;
                continue;
            }else
            {
                m[a][b] = 'X';
                for(i=0;i<=6;i++)
                {
                    for(j=0;j<=4;j++)
                    {
                        outStream << m[i][j] << " ";
                    }
                    outStream << endl;
                }
                outStream << endl;
            }
        }
    inStream.close();
    outStream.close();

    return 0;
}