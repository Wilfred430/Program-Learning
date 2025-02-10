#include<iostream>
using namespace std;

int main()
{
    int W,L,i,j,MAX;
    cin >> W >> L;
    if(W > L)
    {
        MAX = L;
    }else
    {
        MAX = W;
    }
    int** MATRIX = new int*[W];
    for(i = 0;i < W;i++)
    {
        MATRIX[i] = new int[L];
    }
    for(i = 0;i < W;i++)
    {
        for(j = 0;j < L; j++)
        {
            cin >> MATRIX[i][j];
        }
    }
    
    int z,k,t;
    int SUM=0;
    bool DEF = false;
    for(z=1;z<=MAX;z++)
    {
        for(j=0;j<W;j++)
        {
            for(i=0;i < L;i++)
            {
                int tmp = 0;
                DEF = false;
                bool BY = false, BX = false;
                for(k = j;k < j+z;k++)
                {

                    if(k >= W)
                    {
                        break;
                    }else if(DEF)
                    {
                        break;
                    }
                    DEF = false;
                    for(t = i;t < i+z;t++)
                    {
                        if(t >= L)
                        {
                            DEF = true;
                            break;
                        }else if(MATRIX[k][t] == 0)
                        {
                            DEF = true;
                            break;
                        }
                        if(t == i+z-1)
                        {
                            BX = true;
                        }
                        if(k == j+z-1)
                        {
                            BY = true;
                        }
                        tmp += MATRIX[k][t];
                    }
                }
                if(BY)
                {
                    if(BX)
                    {
                        if(tmp > SUM)
                        {
                            SUM = tmp;
                        }
                    }
                }
            }
        }
    }
    cout << SUM << endl;

    for(i=0;i < L;i++)
    {
        delete [] MATRIX[i];
    }
    delete [] MATRIX;
    return 0;
}