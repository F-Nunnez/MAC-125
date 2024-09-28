#include <iostream>
#include <cctype>
#include <string>
#include <unordered_map>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::unordered_map;

int main() {
    // Hash map
    unordered_map<int, string> hexMap{
        {0, "0"},
        {1, "1"},
        {2, "2"},
        {3, "3"},
        {4, "4"},
        {5, "5"},
        {6, "6"},
        {7, "7"},
        {8, "8"},
        {9, "9"},
        {10, "A"},
        {11, "B"},
        {12, "C"},
        {13, "D"},
        {14, "E"},
        {15, "F"},
    };

    int number = 0; // Build number here
    int digit; // Converted ASCII code to actual digit
    char c; // ASCII character code

    cout << "Enter digits, then enter my non-digit to finish: ";

    cin >> c;

    while(isdigit(c)) {
        digit = c - '0'; // Convert ASCII to digit
        number = 10 * number + digit; // Shift number, then add new digit

        cin >> c; // Get next digit to finish.
    }

    cout << "Show number: (dec) " << number << endl;

    cout << "Show number: (hex) " << (number / 16) << hexMap[(number % 16)] << endl;

    return 0;

    
}