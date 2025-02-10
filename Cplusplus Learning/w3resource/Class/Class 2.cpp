#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int width;
    public:
        int Area();
        int Perimeter();
        void setLength(int l);
        void setWidth(int w);
};

int Rectangle::Area()
{
    return length*width;
}

int Rectangle::Perimeter()
{
    return 2*(length+width);
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

int main()
{
    Rectangle BoxA,BoxB;
    BoxA.setLength(5);
    BoxA.setWidth(4);
    cout << BoxA.Area() << endl;
    cout << BoxA.Perimeter() << endl;
    BoxB.setLength(10);
    BoxB.setWidth(10);
    cout << BoxB.Area() << endl;
    cout << BoxB.Perimeter() << endl;

    return 0;
}