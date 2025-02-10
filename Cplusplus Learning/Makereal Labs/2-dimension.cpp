#include<iostream>
using namespace std;

int main()
{
    int grade[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int i,j;
    cin >> i >> j;
    cout << grade[i][j] << endl;

    return 0;
}