#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char a[21],b[20],left,tmpA[20],tmpB[20];
    int i,k[20],j;
    ifstream inStream;
    for(int i=0;i<20;i++){
        a[i]='0';
        b[i]='0';
    }
    inStream.open("C++ website forth\\ProChen_homework\\input2.txt");

    if(inStream.fail())
    {
        cout << "No!";
        exit(1);
    }
    while(1)
    {
        int LengthA=0,LengthB=0;
        for(i=0;i<=19;i++)
        {
            inStream.get(a[i]);
            if(a[i] == ' ')
            {   a[i]='0';
                break;
            }else if(i == 19)
            {
                inStream.get(left);
            }
            LengthA++;
        }
        cout<<"a";
        for(i=0;i<=19;i++)
        {
            cout << a[i];
        }
        for(i=0;i<=19;i++)
        {
            inStream.get(b[i]);            
            if(b[i] == '\n')
            {  b[i]='0';
                break;
            }else if(i == 19)
            {
                break;
            }
            LengthB++;
        }
        inStream.get(left);
        cout<<endl;
        cout<<"b";
       for(i=0;i<=19;i++)
        {
            cout << b[i];
        }
        if((LengthA == 20) || (LengthB == 20))
        {
            cout << "Overflow!" << endl;
            break;
        }else if((a[0] == '0') && (b[0] == '0'))
        {
            break;
        }
      /*  for(i=0;i<=19;i++)
        {
            tmpA[i]=a[i];
            a[i] = '0';
        }
        for(i=0;i<=19;i++)
        {
            if(((i-20)-LengthA)>=20)
            {
                break;
            }
            if(tmpA[i] == '1'||tmpA[i] == '2'||tmpA[i] == '3'||tmpA[i] == '4'||tmpA[i] == '5'||tmpA[i] == '6'||tmpA[i] == '7'||tmpA[i] == '8'||tmpA[i] == '9')
            {
                a[(i+20)-LengthA]=tmpA[i];
            }
        }
        for(i=0;i<=19;i++)
        {
            tmpB[i]=b[i];
            b[i] = '0';
        }
        for(i=0;i<=19;i++)
        {
            if(((i-20)-LengthB)>=20)
            {
                break;
            }
            if(tmpB[i] == '1'||tmpB[i] == '2'||tmpB[i] == '3'||tmpB[i] == '4'||tmpB[i] == '5'||tmpB[i] == '6'||tmpB[i] == '7'||tmpB[i] == '8'||tmpB[i] == '9')
            {
                b[(i+20)-LengthB]=tmpB[i];
            }
        }
        /*for(i=0;i<=19;i++)
        {
            k[i]=(int(a[i])+int(b[i]))-2*int('0');
            if(k[i] >= 10)
            {
                k[i-1]=k[i-1]+1;
                k[i]=(k[i]%10);
            }
        }
        cout << "A + B = ";
        for(i=0;i<=19;i++)
        {
            if(k[i] == 0)
            {
                continue;
            }else
            {
                cout << k[i];
            }
        }*/
        cout << endl;
    } 
    
    inStream.close();
    return 0;
}
