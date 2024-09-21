// Structure with safe function
#include <iostream>
// using namespace std; not the best...
using std::cout, std::cin, std::endl;

//structure
//all functions and data are public by default
struct Point { // blue print
    int x{}, y{}; //set x=y=0
};

void show(const Point&);

int main() {
    Point Origin{0, 0}, hero{1, 1};

    show(Origin); // make P an alias for Origin
    show(hero); // make P an alias for hero

    return 0;
}

void show(const Point& P) {
    cout << '(' << P.x << ',' << P.y << ')' << endl;
}