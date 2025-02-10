#include<iostream>
#include<vector>
using namespace std;

namespace Type1
{
    void Print(int size,int m[])
    {
        for(int i=0;i<size;i+=2)
        {
            cout << m[i] << " ";
        }
        cout << endl;
    }
}

namespace Type2
{
    void Print(int size,int m[])
    {
        for(int i=1;i<size;i+=2)
        {
            cout << m[i] << " ";
        }
        cout << endl;
    }
}

void BigPrint(int size,int m[])
{
    for(int i=0;i<size;++i)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    int* m = new int[size];
    for(int i=0;i<size;++i)
    {
        cin >> m[i];
    }

    using Type1::Print;
    Print(size,m);
    Print(size,m);
    Print(size,m);
    
    {
        using namespace Type2;
        Print(size,m);
    }

    BigPrint(size,m);

    delete [] m;

    return 0;
}