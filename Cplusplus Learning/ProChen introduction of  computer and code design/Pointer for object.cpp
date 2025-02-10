#include<iostream>
using namespace std;

class Test
{
    public:
        Test();
        Test(int value);
        void print() const;
    private:
        int x;
};

Test::Test(): x(0) {}

Test::Test(int value): x(value) {}

void Test::print() const
{
    cout << "x = " << x << endl;
    cout << "this->x = " << this->x << endl;
    cout << "*this->x = " << (*this).x << endl; 
}

int main()
{
    Test t(12);
    t.print();
}