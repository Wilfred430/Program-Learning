#include<iostream>
using namespace std;

class Myvector
{
    public:
        Myvector() { Num = 0;}
        Myvector(int num){ Num = num;}
        void print();
    private:
        int Num;
};

void Myvector::print()
{
    cout << Num << endl;
}

int main()
{
    Myvector* ptrArray[5];
    for(int i=0;i<5;i++)
    {
        ptrArray[i] = new Myvector(i+1);
    }
    ptrArray[0]->print();
    ptrArray[1]->print();
    ptrArray[2]->print();
    ptrArray[3]->print();
    ptrArray[4]->print();
    return 0;
}