#include<iostream>
using namespace std;

namespace Average
{
    double CalculateAverage(int size,int m[])
    {
        int sum = 0;
        for(int i=0;i<size;i++)
        {
            sum += m[i];
        }
        return double(sum)/size;
    }
}

int main()
{
    int size;
    cin >> size;
    int* m = new int[size];
    for(int i=0;i<size;i++)
    {
        cin >> m[i];
    }
    cout << Average::CalculateAverage(size,m) << endl;

    delete [] m;
}