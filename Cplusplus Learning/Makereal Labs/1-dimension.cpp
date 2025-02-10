#include<iostream>
using namespace std;

int main()
{
    int score[5] = {0};

    cout << "(";
    for(int i=0;i<4;i++)
    {
        cout << score[i] << ", ";
    }
    cout << score[4] << ")" << endl;

    return 0;
}