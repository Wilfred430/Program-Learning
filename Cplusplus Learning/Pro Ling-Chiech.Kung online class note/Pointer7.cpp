#include<iostream>
using namespace std;

void print(int** array, int len);

void printID(int* array, int n);

int main()
{
    int len;
    cin >> len;
    int** array = new int*[len];
    for(int i = 0; i < len ;i++)
    {
        array[i] = new int[i+1];
        for(int j=0;j <= i;j++)
        {
            array[i][j] = j+1;
        }
    }
    print(array,len);

    return 0;
}

// void print(int** array, int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         for(int j = 0;j <=i;j++)
//         {
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return;
// }

void printID(int* array, int n)
{
    for(int i=0;i<n;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void print(int** array, int len)
{
    for(int i=0;i<len;i++)
    {
        printID(array[i],i+1);
    }
}