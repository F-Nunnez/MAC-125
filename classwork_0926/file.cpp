#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;
using std::string;
using std::ostream;

class number {
    int x{};

    public:
        int getX() const {
            return x;
        }
        void setX(int a) {
            x=a;
        }
};

ostream& operator<<(ostream& out, const number& P) {
    out << P.getX();
    return out;
}
int main() {

    number x;
    x.setX(99);

    cout << x.getX() << endl;

    return 0;
}
