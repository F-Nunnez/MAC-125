// Struct Point with an error.

// There is a small error for you to fix
// it's very small but the code will not 
// compile without fixing it. only 5 letters 
// stands in the way of running the copde.

#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl;

struct Point { 
    int x{0}, y{0}; // Instance variables / local
    void show(); // Methods (functions)
    double distance(const Point&) const; // Tuesday's notes 9-17
    bool IsEqual(const Point&) const; // Today's 9-19
    bool NotEqual(const Point&) const;
    // getter, accessor int getX() const;
    // setter, mutator void setX(value);
};

// The scope resolution operator
void Point::show() { // The error was the keyword const
    cout << '(' << x << ',' << y << ')' << endl;
}

double Point::distance(const Point& P2) const {
    double dx = x - P2.x;
    double dy = y - P2.y;
    return hypot(dx, dy);
}

bool Point::IsEqual(const Point& P2) const {
    return x == P2.x && y == P2.y; // logic && ---> AND
}

// Composition
bool Point::NotEqual(const Point& P2) const {
    return ! IsEqual(P2);
}

int main() {

    Point Origin, hero{1, 1}, monster{3, 4}, WishingWell{5, 1};

    Origin.show(); // Make P an alias for Origin.
    hero.show(); // Make P an alias for hero.
    monster.show();

    cout << "Hero is " << hero.distance(WishingWell) << " km from well\n";

    if (hero.distance(WishingWell) <2.0) 
        cout << "Hero drinks water\n";
    else
        cout << "Hero is still thirsty 🚰\n";

    return 0;    
}