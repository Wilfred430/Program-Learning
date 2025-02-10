#include<iostream>
using namespace std;

class window
{
    private:
        int width;
        int height;
        int locationX;
        int locationY;
        int status;
        static int barColor;
    public:
        static int getbarColor();
        static void setbarColor(int colar);
};

int window::barColor = 0; //不屬於任何一個object，所有object皆適用

int window::getbarColor()
{
    return window::barColor;
}

void window::setbarColor(int color)
{
    window::barColor = color;
}

int main()
{
    window w; // w not used!
    cout << window::getbarColor() << endl;
    window::setbarColor(1);
    cout << window::getbarColor() << endl;

    return 0;
}