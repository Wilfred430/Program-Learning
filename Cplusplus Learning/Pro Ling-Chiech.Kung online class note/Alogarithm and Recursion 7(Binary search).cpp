#include<iostream>
using namespace std;

bool binarySearch(int a[], int bottom, int top, int target);

int main()
{
    int target,bottom = 0,top,i,j,Switch;
    
    cout << "Please enter the size of matrix A: ";
    cin >> top;
    int* a = new int[top];
    top--;
    cout << "Please enter the entries of matrix A (seperated by space): ";
    for(i=0;i<=top;i++)
    {
        cin >> a[i];
    }
    for(j=0;j<=top;j++)
    {
        for(i=0;i<top;i++)
        {
            if(a[i] > a[i+1])
            {
                Switch = a[i];
                a[i] = a[i+1];
                a[i+1] = Switch;
            }
        }
    }
    cout << "Please enter the target number: ";
    cin >> target;
    if(binarySearch(a,bottom,top,target))
    {
        cout << "Yes!" << endl;
    }else
    {
        cout << "No!" << endl;
    }

    return 0;
}

bool binarySearch(int a[], int bottom, int top, int target)
{
    if((top - bottom) == 1)
    {
        if(a[0] == target)
        {
            return true;
        }else
        {
            return false;
        }
    }else
    {
        int median = (bottom + top)/2;
        if(target == a[median])
        {
            return true;
        }else if(target > a[median])
        {
            return binarySearch(a,median+1,top,target);
        }else
        {
            return binarySearch(a,bottom,median,target);
        }
    }
}