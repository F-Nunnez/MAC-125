#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector to hold integers
    vector<int> numbers;
    // Add elements to the vector
    cout << "Adding elements to the vector..." << endl;
    for (int i = 1; i <= 5; ++i) {
        numbers.push_back(i); // Add elements to the end of the vector
    }
    // Display the elements of the vector
    cout << "Elements of the vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // Add more elements beyond the current capacity
    cout << "Adding more elements beyond the current capacity..." << endl;
    for (int i = 6; i <= 10; ++i) {
        numbers.push_back(i); // Add elements to the end of the vector
    }
    // Display the elements of the vector again
    cout << "Elements of the vector after adding more elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}