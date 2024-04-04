/*
Self-Test Exercises
1. Give the declaration for two variables called feet and inches. Both variables are of type int and both are to be initialized to zero in the declaration. Give both initialization alternatives.
2. Give the declaration for two variables called count and distance. count is of type int and is initialized to zero. distance is of type double and is initialized to 1.5. Give both initialization alternatives.
3. Write a program that contains statements that output the values of five or six variables that have been defined, but not initialized. Compile and run the program. What is the output? Explain.
*/

// 1.

#include <iostream>
using namespace std;

int main () {
    // 1)  
    // int feet = 0, inches = 0;
    // cout << "Feet: " << feet << ", Inches: " << inches << endl;

    // int feet(0), inches(0);
    // cout << "Feet: " << feet << ", Inches: " << inches << endl;

    // 2)
    // int count = 0;
    // int count(0);
    // double distance = 1.5;
    // double distance(1.5);

    // 3)
    int integer;
    double floating_point;
    char character;
    bool boolean;
    string str;

    cout << "Integer: " << integer << endl;
    cout << "Floating Point: " << floating_point << endl;
    cout << "Character: " << character << endl;
    cout << "Boolean: " << boolean << endl;
    cout << "String: " << str << endl;
    /*
    p.13 Absolute C++ 6th edition.
    The value of an uninitialized variable is determined by whatever pattern of zeros and ones was left in its memory location by the last program that used that portion of memory.
    */ 

    return 0;
}

