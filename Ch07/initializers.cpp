// Member Initializers and Constructor Delegation in C++

#include <iostream>
using namespace std;

class Coordinate {

    public:
        Coordinate();
        Coordinate(int x);
        Coordinate(int x, int y);

        int getX();
        int getY();
    private:
        int x = 1;
        int y = 2;
};

Coordinate::Coordinate() {}

Coordinate::Coordinate(int xval)
    : x(xval){}
Coordinate::Coordinate(int xval, int yval)
    : x(xval), y(yval) {}

int Coordinate::getX() {
    return x;
}

int Coordinate::getY() {
    return y;
}
