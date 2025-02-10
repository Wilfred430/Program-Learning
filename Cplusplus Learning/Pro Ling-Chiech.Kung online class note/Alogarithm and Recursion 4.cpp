#include<iostream>
#include<vector>
using namespace std;

double max(double a[], int len);

int main()
{
    int x;
    cout << "Please enter the size of array you want to compare: ";
    cin >> x;
    double* a = new double[x];
    cout << "Please enter the element of the array: ";
    for(int i=0;i<x;i++)
    {
        cin >> a[i];
    }
    int Max = max(a,x);
    cout << "The result is : " << Max;
    delete [] a;

    return 0;
}

double max(double a[], int len)
{
    if(len == 1)
    {
        return a[0];
    }
    double submax=max(a, len-1);
    if(a[len-1] > submax)
    {
        return a[len-1];
    }else
    {
        return submax;
    }
}