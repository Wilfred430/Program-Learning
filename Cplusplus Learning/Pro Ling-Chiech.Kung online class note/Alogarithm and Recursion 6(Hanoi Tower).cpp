#include<iostream>
using namespace std;

void hanoiTower(char from, char via, char to, int disc);

int main()
{
    int disc;
    cout << "Please enter the number of loop you want to move: ";
    cin >> disc;
    char a='A',b='B',c='C';

    hanoiTower(a,b,c,disc);

    return 0;
}

void hanoiTower(char from, char via, char to, int disc)
{
    if(disc == 1)
    {
        cout << "From " << from << " to " << to << endl; 
    }else
    {
        hanoiTower(from ,to ,via,disc-1);
        cout << "From " << from << " to " << to << endl;
        hanoiTower(via, from, to, disc-1);
    }
}