#include<iostream>
using namespace std;

class Myprogram
{
    private:
    int data;

    public:
    Myprogram(): data(0) {};
    Myprogram(int num);
    friend void Printf();
};

void Printf()
{
    cout << "Have been to trigger.\n";
}

int main()
{
    Myprogram M;
    M.Printf();

    return 0;
}