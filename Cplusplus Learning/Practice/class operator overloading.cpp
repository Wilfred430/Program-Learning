#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(const Point& P);
    Point(int _x, int _y) : x(_x), y(_y) {}

    friend ostream& operator<<(ostream& out, const Point& P);
    friend Point operator+()
    // Point operator +(const Point& rhs) const;
    // Point operator -(const Point& rhs) const;

    void setX(int X):x(X){}
    void setY(int Y):y(Y){}
    int getX() const { return x; }
    int getY() const { return y; }
};

Point::Point(const Point& P) {
    this->x = P.getX();
    this->y = P.getY();
}

Point Point::operator +(const Point& rhs) const {
    return Point(x + rhs.getX(), y + rhs.getY());
}

Point Point::operator -(const Point& rhs) const {
    return Point(x - rhs.getX(), y - rhs.getY());
}

ostream& operator<<(ostream& out, const Point& P) {
    out << "(" << P.getX() << ", " << P.getY() << ")";
    return out;
}

int main() {
    Point a(3, 2), b(1, 4);
    Point c = a + b;
    cout << "a + b = " << c << endl;
    Point d = a - b;
    cout << "a - b = " << d << endl;

    return 0;
}
