#include<iostream>
using namespace std;

void hanoitower(char A, char B, char C, int dis);

int main()
{
    int dis;
    cout << "How many disk you want to move:";
    cin >> dis;
    hanoitower('A','B','C',dis);

    return 0;
}

void hanoitower(char A, char B, char C, int dis)
{
    if(dis == 1)
    {
        cout << "From " << A << " to " << C << endl;
    }else
    {
        hanoitower('A','C','B',dis-1);
        cout << "From " << A << " to " << C << endl;
        hanoitower('B','A','C',dis-1);
    }
}