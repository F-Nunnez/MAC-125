#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string; // or std::string

struct Box {
    string product;
    double price;
    string productCode;
};

// Overload the << operator for the Box structure
std::ostream& operator<<(std::ostream& os, const Box& box) {
    os << "Product: " << box.product << ", Price: " << box.price << ", Product Code: " << box.productCode;
    return os;
}

int main() {

    Box A; // Create Box structure

    A.product = "Soap";
    A.price = 4.95;
    A.productCode = "001019291029"; // Access members(fields)

    cout << "A.product: " << A.product << endl;
    cout << "A.price: " << A.price << endl;
    cout << "A.productCode: " << A.productCode << endl;

    cout <<"A: " << A << endl;

    return 0;
}