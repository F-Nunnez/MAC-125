#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
   // Standard usage of cout with chaining
   cout << "Bozo 1\n" << "Bozo 2\n";
   
   // Explicitly calling operator<< (Less conventional way)
   operator<<(operator<<(cout, "answer 1\n"), "answer 2\n");
   
   return 0;
}
