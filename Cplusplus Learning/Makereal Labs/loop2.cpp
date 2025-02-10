#include<iostream>
#include<string>
using namespace std;

#define N 5

int main()
{
    string student[N][3];
    cout << N << " studnet" << endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> student[i][j];
        }
    }
    cout << "saved!" << endl;

    int indx;
    while(cin >> indx)
    {
        if(indx == -1)
        {
            break;
        }else if(indx >= N)
        {
            break;
        }else
        {
            cout << "Name:" << student[indx][0] << endl;
            cout << "id:" << student[indx][1] << endl;
            cout << "gender:" << student[indx][2] << endl;
        }
    }

    return 0;
}