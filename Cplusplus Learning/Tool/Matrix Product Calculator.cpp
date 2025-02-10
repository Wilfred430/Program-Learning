#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int dim,i,j,y;
    cout << "Enter the dimension of the matrix: ";
    cin >> dim;
    int k = dim;
    int **a = new int*[k];
    for(i=0;i<k;i++)
    {
        a[i] = new int[k];
    }
    int **b = new int*[k];
    for(i=0;i<k;i++)
    {
        b[i] = new int[k];
    }
    int **result = new int*[k];
    for(i=0;i<k;i++)
    {
        result[i] = new int[k];
    }
    cout << "Enter " << dim << "X" << dim << " matrix:" << endl;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Enter a matrix want to product:" << endl;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            cin >> b[i][j];
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            int sum = 0;
            for(y=0;y<k;y++)
            {
                sum+=a[i][0+y]*b[0+y][j];
            }
            result[i][j] = sum;
        }
    }
    cout << "result is:" << endl;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            cout << setw(5) << result[i][j];
        }
        cout << endl;
    }
    for(i=0;i<k;i++)
    {
        delete [] a[i];
    }
    delete [] a;
    for(i=0;i<k;i++)
    {
        delete [] b[i];
    }
    delete [] b;
    for(i=0;i<k;i++)
    {
        delete [] result[i];
    }
    delete [] result;
}