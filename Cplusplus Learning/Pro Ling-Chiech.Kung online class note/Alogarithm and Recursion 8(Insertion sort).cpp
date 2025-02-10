#include<iostream>
using namespace std;

void InsertionSort(int a[],int i,int N);

int main()
{
    int N,i;
    cout << "Please enter the size of matrix A: ";
    cin >> N;
    int* a = new int[N];
    cout << "Please enter the entries of matrix A (seperated by space): ";
    for(i = 0;i < N;i++)
    {
        cin >> a[i];
    }
    for(i = 0;i<N;i++)
    {
        InsertionSort(a,i,N);
    }
    cout << "The order is ";
    for(i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void InsertionSort(int a[],int i,int N)
{
    int j,tmp,k;
    for(j=i;j>=0;j--)
    {
        if(a[i] > a[j])
        {
            tmp = a[i];
            for(k=i;k>j+1;k--)
            {
                a[k]=a[k-1];
            }
            a[j+1] = tmp;
            break;
        }
    }
}