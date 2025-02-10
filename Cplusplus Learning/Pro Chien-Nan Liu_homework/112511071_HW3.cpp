#include<iostream>
#include<vector>
using namespace std;

char* deleteRepeats(char* a, int& size);

int main()
{
    string s;
    int N,i;
    cout << "Please enter the size of string: ";
    cin >> N;
    cout << "Please enter string: ";
    cin >> s;
    char* a = new char[N];
    for(i=0;i<N;i++)
    {
        a[i] = s[i];
    }
    deleteRepeats(a,N);
    cout << "The new size of string is " << N << endl;
    cout << "The string after deleteRepeats is ";
    for(i=0;i<N;i++)
    {
        cout << a[i];
    }
    delete [] a;
    return 0;
}

char* deleteRepeats(char* a, int& size)
{
    int i,j,z;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i] == a[j])
            {
                for(z=j+1;z<size;z++)
                {
                    a[z-1] = a[z];
                }
                j--;
                size--;
            }
        }
    }
    return a;
}