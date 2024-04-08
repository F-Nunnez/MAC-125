#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main( )
{
    // Part B Exam 1
    // Write a C++ program that outputs the first 50 prime numbers and displays, as shown below.
    
    // 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    // 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    // 73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
    // 127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
    // 179, 181, 191, 193, 197, 199, 211, 223, 227, 229
    
    int SIZE = 250, prime_counter = 0;
    bool array[SIZE]; // Use bool instead of int to represent primes
    for (int i = 0; i < SIZE; ++i) {
        array[i] = true; // Initialize all numbers as prime initially
    }
    
    for (int i = 2; i * i < SIZE; ++i) {
        if (array[i]) { // If i is prime
            for (int j = i * i; j < SIZE; j += i) {
                array[j] = false; // Mark multiples of i as non-prime
            }
        }
    }

    int counter = 0;
    for (int i = 2; i < SIZE; ++i) {
        if (array[i]) {
            
            if (prime_counter == 50) {
                break;    
            }
            cout << i << " "; // Print the prime numbers
            ++counter;
            if (counter == 10) { // Print 10 numbers per line
                cout << endl;
                counter = 0;
            }
            prime_counter++;
        }
    }
    return 0;
}


