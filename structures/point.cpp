#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Point {
    double x, y;
    string name;
};

int main() {

    Point A{5, 7, "Bravo"}; // C++17
    Point B{2, 5, "Victor"};

    cout << A.name << " " << A.x << ',' << A.y << endl;
    cout << B.name << " " << B.x << ',' << B.y << endl;

    return 0;
}
