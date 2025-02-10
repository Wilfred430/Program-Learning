#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char a[20],b[20],left,tmpA[20],tmpB[20];
    int i,k[20],j;
    ifstream inStream;
    inStream.open("C:\\C++ website forth\\ProChen_homework\\input2.txt");

    if(inStream.fail())
    {
        cout << "No!";
        exit(1);
    }
    while(1)
    {
    	for(int i=0;i<20;i++)
		{
	        a[i]='0';
	        b[i]='0';
    	}
        int LengthA=0,LengthB=0,h=1,f=0;
        char X,Y;
        for(i=0;i<=19;i++)
        {
            inStream.get(a[i]);
            if(a[i] == ' ')
            {   
				a[i]='0';
                break;
            }else if(i == 19)
            {
				inStream.get(left);
				break;
            }
            LengthA++;
        }
        for(i=0;i<=19;i++)
        {
            inStream.get(b[i]);            
            if(b[i] == '\n')
            {  
				b[i]='0';
                break;
            }else if(i == 19)
            {
				inStream.get(left);
                break;
            }
            LengthB++;
        }
        if(LengthA == 20)
        {
            X=a[19];
        }
        if(LengthB == 20)
        {
            Y=b[19];
        }
        if((a[0] == '0') && (b[0] == '0'))
        {
            break;
        }
        if(LengthA != 20)
        {
            for(i=0;i<=19;i++)
            {
                tmpA[i]=a[i];
                a[i] = '0';
            }
            for(i=0;i<=19;i++)
            {
                if(tmpA[i] == '1'||tmpA[i] == '2'||tmpA[i] == '3'||tmpA[i] == '4'||tmpA[i] == '5'||tmpA[i] == '6'||tmpA[i] == '7'||tmpA[i] == '8'||tmpA[i] == '9')
                {
                    a[(i+20)-LengthA]=tmpA[i];
                }
            }
        }
        if(LengthB != 20)
        {
            for(i=0;i<=19;i++)
            {
                tmpB[i]=b[i];
                b[i] = '0';
            }
            for(i=0;i<=19;i++)
            {
                if(tmpB[i] == '1'||tmpB[i] == '2'||tmpB[i] == '3'||tmpB[i] == '4'||tmpB[i] == '5'||tmpB[i] == '6'||tmpB[i] == '7'||tmpB[i] == '8'||tmpB[i] == '9')
                {
                    b[(i+20)-LengthB]=tmpB[i];
                }
            }
        }
        if(LengthA==19)
        {
            for(i=0;i<=19;i++)
            {
                if(i==19)
                {
                    a[i] = X;
                    break;
                }
                a[i]=a[i+1];
            }
        }
        if(LengthB==19)
        {
            for(i=0;i<=19;i++)
            {
                if(i==19)
                {
                    b[i] = Y;
                    break;
                }
               b[i]=b[i+1];
            }
        }
        for(i=0;i<=19;i++)
        {
            cout << a[i];
        }
        cout << endl;
        for(i=0;i<=19;i++)
        {
            cout << b[i];
        }
        cout << endl;
        for(i=0;i<=19;i++)
        {
            k[i]=(int(a[i])+int(b[i]))-2*int('0');
            if(k[0] >= 10)
			{
				break;
			}
            if(k[i] >= 10)
            {
                k[i-1]=k[i-1]+1;
                k[i]=(k[i]%10);
            }
        }
        if(k[0] >= 10)
			{
				cout << "Overflow!"<<endl;
				break;
			}
        for(i=19;i>=0;i--)
		{
			f=f+k[i]*h;
			h=h*10;
		}
        cout << "A + B = "<<f<<endl;
    } 
    
    inStream.close();
    return 0;
}