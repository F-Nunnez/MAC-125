//Question 01

// What is the output of the following?

// int count = 3;
// while (count-- > 0) {
//     cout << count << " ";
// }

// Output: 2 1 0

//Question 02

// What is the output of the following?

// int count = 3;
// while (--count > 0) {
//     cout << count << " ";
// }

// Output: 2 1

//Question 03

#include <iostream>

using namespace std;

int main() {

// The following code intends to input a user’s first name,
// last name, and age. However, it has an error. Fix the code.

    // string fullName;
    // int age;
    // cout << "Enter your first and last name." << endl;
    // cin >> fullName;
    // cout << "Enter your age." << endl;
    // cin >> age;
    // cout << "You are " << age << " years old, " << fullName << endl;

    string first, last;
    int age;
    cout << "Enter your first and last name." << endl;
    cin >> first >> last;
    cout << "Enter your age." << endl;
    cin >> age;
    cout << "You are " << age << " years old, " << first << " " << last << endl;

    return 0;
}