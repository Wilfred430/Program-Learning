#include<iostream>
using namespace std;

void set(int *arr, int rows, int columns, int desired_row, int desired_column, int val);
void get(int *arr, int rows, int columns, int desired_row, int desired_column);

int main()
{
    int rows, columns, desired_row, desired_column, val;

    while(1)
    {
        cout << "Enter rows and columns of 2D array:" << endl;
        cin >> rows >> columns;
        int *arr = new int[rows*columns];
        cout << "Memory allocation is created for array" << endl;
        cout << "Enter the desired rows and columns of array to set the values:" << endl;
        cin >> desired_row >> desired_column;
        if((desired_row > rows || desired_row < 0) || (desired_column > columns || desired_column < 0))
        {
            cout << "Desired indices are invalid" << endl;
            break;
        }
        cout << "Enter the value to set in the array:" << endl;
        cin >> val;
        cout << "Enter the desired rows and columns of array to get the values:" << endl;
        set(arr,rows,columns,desired_row,desired_column,val);
        cin >> desired_row >> desired_column;
        if(desired_row > rows || desired_column > columns)
        {
            cout << "Desired indices are invalid" << endl;
            break;
        }
        get(arr,rows,columns,desired_row,desired_column);
        delete arr;
    }

}

void set(int *arr, int rows, int columns, int desired_row, int desired_column, int val)
{
    arr[((desired_row-1)*columns)+desired_column-1]=val;
}
void get(int *arr, int rows, int columns, int desired_row, int desired_column)
{
    cout << "The value from the desired index is  : " << arr[((desired_row-1)*columns)+desired_column-1] << endl;
}