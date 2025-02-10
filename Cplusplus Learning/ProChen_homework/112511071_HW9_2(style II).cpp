#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string A,B;
    int i;
    while(cin >> A >> B)
    {
        char a[21],b[21];
        int ANS[21];
        if(A.length() > 20 || B.length() > 20)
        {
            cout << "Overflow!" << endl;
            continue;
        }
        // initialization
        for(i=0;i<21;i++)
        {
            a[i] = '0';
            b[i] = '0';
            ANS[i] = 0;
        }
        for(i = 0;i < A.length();i++)
        {
            a[21 - A.length() + i] = A[i];
        }
        for(i = 0;i < B.length();i++)
        {
            b[21 - B.length() + i] = B[i];
        }
        if((A.length() == 1 && B.length() == 1))
        {
            if((a[20] == '0' && b[20] == '0'))
            {
                break;
            }
        }
        for(i=20;i >= 1;i--)
        {
            ANS[i-1] = ((ANS[i] + (a[i] - '0') + (b[i] - '0')) / 10);
            ANS[i] = (( ANS[i] + (a[i] - '0') + (b[i] - '0')) % 10);
            
        }
        int count = 0;
        if(ANS[0] != 0)
        {
            cout << "Overflow!" << endl;
            continue;
        }else
        {
            for(i = 0;i < 21;i++)
            {
                if(ANS[i] != 0)
                {
                    count = i;
                    break;
                }
            }
            cout << "A + B = ";
            for(i = count;i < 21;i++)
            {
                cout << ANS[i];
            }
            cout << endl;
        }
    }

    return 0;
}
