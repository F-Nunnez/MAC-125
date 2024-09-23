// Intro to Structures
#include <iostream>
#include <string>

struct Person {
    std::string fn, ln;
    char mi;
};

// Overloading the insertion operator
// so using cout with a Person struct is EZ
std::ostream& operator << (std::ostream& out, const Person &A) {
    out << A.fn << A.mi << A.ln << std::endl;
    return out;
}

int main() {

    Person A;
    // Initialization
    A.fn="john";
    A.ln = "doe";
    A.mi = 'v';

    std::cout << A << std::endl;

    // Inline-direct initialization
    Person B{"Mary", "Jane", 'A'};
    std::cout << B << std::endl;

    // Anonymous initialization
    std::cout << Person{"John", "Doe", 'A'};

    return 0;
}