// Example program
#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl;

struct Point { 
    int x{0}, y{0}; // Instance variables / local
    void show() const; // Methods (functions)
    double distance(const Point&) const; // Tuesday's notes 9-17
    bool IsEqual(const Point&) const; // Today's 9-19
    bool NotEqual(const Point&) const;
    
    // setter, mutator void setX(value);
    void setX(int);

    // getter, accessor int getX() const;
    int getX() {
        return x;
    }

};

void Point::setX(int val) {
    x = val;    
}

// The scope resolution operator
void Point::show() const { // The error was the keyword const
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
    //Origin.x = -34;
    Origin.setX(-34);
    Origin.show();
    cout << "Hero is " << hero.distance(WishingWell) << " km from well\n";
    cout << "Origin.getX(): " << Origin.getX() << "\n";

    if (hero.distance(WishingWell) <2.0) 
        cout << "Hero drinks water\n";
    else
        cout << "Hero is still thirsty 🚰\n";

    return 0;    
}