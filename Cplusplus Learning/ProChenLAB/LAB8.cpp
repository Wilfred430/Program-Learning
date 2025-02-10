#include<iostream>
using namespace std;

int main()
{
    int Size,i,n,j;
    while(1)
    {
        int pair = 0;
        cout << "Please enter the size of the alien numbers array: ";
        cin >> Size;
        if(Size == 0)
        {
            break;
        }
        cout << "Please enter " << Size << " elements for the alien numbers array:" << endl;
        int m[Size];
        for(i = 0;i <= (Size-1);i++)
        {
            cout << "Element " << i+1 << ": ";
            cin >> m[i];
        }
        cout << "Entered alien numbers: ";
        for(i = 0;i <= (Size-1);i++)
        {
            cout << m[i] << " ";
        }
        cout << endl;
        cout << "Please enter your activation code: ";
        cin >> n;
        for(j = 0;j <= (Size - 1);j++)
        {
            for(i = j+1;i <= (Size - 1);i++)
            {
                if((m[j] + m[i]) == n)
                {
                    pair++;
                }
            }
        }
        cout << "pairs: " << pair << endl;
    }
}