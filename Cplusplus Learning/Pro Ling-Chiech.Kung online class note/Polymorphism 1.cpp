#include<iostream>
#include<string>
using namespace std;

class Pet
{
    public:
        string name;
        virtual void print()
        {
            cout << this->name << endl;
        }
};

class Dog:public Pet
{
    public:
        void print()
        {
            cout << this->name << endl;
            cout << this->breed << endl;
        }
        string breed;
};

int main()
{
    Pet* ppet;
    Dog* ddog;
    ddog = new Dog;
    ddog->name = "Jeslse";
    ddog->breed = "trush";
    ppet = ddog;
    ppet->print();
    cout << ppet->breed << endl;

    return 0;
}