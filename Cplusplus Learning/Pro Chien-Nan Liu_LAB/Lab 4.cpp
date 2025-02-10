#include<iostream>
#include<fstream>
//#include"CNumpy.h"
using namespace std;


CNumpy::CNumpy(const char *input_filename)
{
    ifstream in;
    in.open(input_filename);
    in >> row >> col;
    matrix = new int*[row];
    for(int i=0;i<row;i++)
    {
        matrix[i] = new int[col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            in >> matrix[i][j];
        }
    }
    in.close();
}



CNumpy::~CNumpy()
{
    for(int i=0;i<row;i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;
}

int** CNumpy::getMatrix()const
{
    return matrix;
}

int CNumpy::getRow()const
{
    return row;
}

int CNumpy::getCol()const
{
    return col;
}

int CNumpy::min()const
{
    int min = matrix[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

int CNumpy::max()const
{
    int max = matrix[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

void CNumpy::argmin(int *idx1, int *idx2)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] == min())
            {
                *idx1 = i;
                *idx2 = j;
            }
        }
    }
}

void CNumpy::argmax(int *idx1, int *idx2)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] == max())
            {
                *idx1 = i;
                *idx2 = j;
            }
        }
    }
}

void CNumpy::concatenate(const CNumpy & a, int axis)
{
    if(axis == 0)
    {
        int new_rows = row + a.getRow();
        int** new_matrix = new int*[new_rows];

        // Copy current matrix
        for(int i = 0; i < row; ++i)
        {
            new_matrix[i] = new int[col];
            copy(matrix[i], matrix[i] + col, new_matrix[i]);
        }

        // Copy matrix 'a'
        for(int i = 0; i < a.getRow(); ++i)
        {
            new_matrix[i + row] = new int[col];
            copy(a.getMatrix()[i], a.getMatrix()[i] + col, new_matrix[i + row]);
        }

        // Free current matrix
        for(int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        // Update 'matrix' pointer
        matrix = new_matrix;
        row = new_rows;
    }
    else if(axis == 1)
    {
        int new_cols = col + a.getCol();
        for(int i = 0; i < row; ++i)
        {
            int* new_row = new int[new_cols];
            copy(matrix[i], matrix[i] + col, new_row);
            copy(a.getMatrix()[i], a.getMatrix()[i] + a.getCol(), new_row + col);
            delete[] matrix[i];
            matrix[i] = new_row;
        }
        col = new_cols;
    }
}


void CNumpy::render()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] > 127)
            {
                cout << "@@";
            }else
            {
                cout << "__";
            }
        }
        cout << endl;
    }
}
