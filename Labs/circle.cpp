#include <iostream> 
using namespace std;

int main() {
    // Area of the circle A=πrr
    const double pi = 3.14159;     
    double area, radius;
    cout << "Area of circle.\n";
    cout << "Enter the radius\n";
    cin >> radius;
    area = pi * (radius * radius);
    cout << "The area is: " << area << endl;

    return 0;
}