// Struct with method
#include <iostream>
using std::cout, std::cin, std::endl;

struct Point {

    int x{3}, y{3};

    void show() {
        cout << '(' << x << ',' << y << ')' << endl;
    }
};

int main() {

    Point Origin, hero{1, 1};

    Origin.show(); // Make P an alias for Origin.
    hero.show(); // Make P an alias for hero.

    return 0;
}