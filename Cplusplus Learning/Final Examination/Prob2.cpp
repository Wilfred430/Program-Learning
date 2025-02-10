#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n,m;
    int i,j,nlen,mlen;
    cout << "1st number total digits: ";
    cin >> nlen;
    char * N = new char[nlen];
    cout << "1st number: ";
    for(i = nlen-1 ; i >= 0;i--)
    {
        cin >> N[i];
    }
    cout << "2nd number total digits: ";
    cin >> mlen;
    char* M = new char[mlen];
    cout << "2nd number: ";
    for(i = mlen-1 ;i >= 0;i--)
    {
        cin >> M[i];
    }
    int* ANS = new int[nlen + mlen + 1];
    int Len = nlen + mlen + 1;
    for(i=0;i< Len;i++)
    {
        ANS[i] = 0;
    }
    for(i=0;i<mlen;i++)
    {
        for(j=0;j < nlen;j++)
        {
            ANS[i+j+1] = ANS[i+j+1] + ((N[j] - '0') * (M[i] - '0') + ANS[i+j])/10;
            ANS[i+j] = ((N[j] - '0') * (M[i] - '0') + ANS[i+j])%10;
        }
    }
    cout << "Answer = ";
    int tmp;
    for(i=Len-1;i >= 0;i--)
    {
        if(ANS[i] != 0)
        {
            tmp = i;
            break;
        }
    }
    for(i=tmp;i >= 0;i--)
    {
        cout << ANS[i];
    }
    cout << endl;

    delete [] N;
    delete [] M;
    delete [] ANS;

    return 0;
}