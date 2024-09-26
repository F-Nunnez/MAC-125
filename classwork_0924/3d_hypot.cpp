// Example program
#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl, std::hypot;

struct Point { 
    int x{0}, y{0}, z{0}; // Instance variables / local
    void show() const; // Methods (functions)
    double distance(const Point&) const; // Tuesday's notes 9-17
    bool IsEqual(const Point&) const; // Today's 9-19
    bool NotEqual(const Point&) const;
    
    // getter, accessor int getX() const;
    int getX() const {
        return x;
    }
    
    // int getY() const {
    //     return y;
    // }
    
    // int getZ() const {
    //     return z;
    // }
    
    // setter, mutator void setX(value);
    void setX(int);
    
    // void setY(int);
    
    // void setZ(int);
};

void Point::setX(int val) {
    x = val;    
}

// The scope resolution operator
void Point::show() const { // The error was the keyword const
    cout << '(' << x << ',' << y << ',' << z << ')' << endl;
}

double Point::distance(const Point& P2) const {
    double dx = x - P2.x;
    double dy = y - P2.y;
    double dz = z - P2.z;
    
    return hypot(dx, dy, dz);
}

bool Point::IsEqual(const Point& P2) const {
    return x == P2.x && y == P2.y && z == P2.z; // logic && ---> AND
}

// Composition
bool Point::NotEqual(const Point& P2) const {
    return ! IsEqual(P2);
}

int main() {

    Point Origin, hero{1, 1, 1}, monster{3, 4, 8}, WishingWell{5, 1, 6};
    
    cout << "Origin.show()" << endl;
    Origin.show(); // Make P an alias for Origin.
    cout << "hero.show(): " << endl;
    hero.show(); // Make P an alias for hero.
    cout << "monster.show(): " << endl;
    monster.show();
    //Origin.x = -34;
    Origin.setX(-34);
    // Origin.setY(4);
    // Origin.setZ(3);
    Origin.show();
    
    cout << "Origin.x: " << Origin.x << endl;
    cout << "Origin.getX(): " << Origin.getX() << endl;

    if (hero.distance(WishingWell) <2.0) 
        cout << "Hero drinks water\n";
    else
        cout << "Hero is still thirsty 🚰\n";

    return 0;    
}