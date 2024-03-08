/*
Self-Test Exercises
4. Convert each of the following mathematical formulas to a C++ expression. 3x 3x + y
x + y / 7
3x + y / z + 2 
*/

#include <iostream>

using namespace std;

int main() {
    // // Given variables
    // int x{10}, y{5}, z{3};

    // // Formula 1: 3x   
    // int formula_1 = 3 * x;

    // // Formula 2: 3x + y
    // int formula_2 = 3 * x + y;

    // // Formula 3: (x + y) / 7
    // double formula_3 = static_cast<double>(x + y) / 7; // static_cast is a type conversion operator

    // // Formula 4: (3x + y) / (x + 2)
    // double formula_4 = static_cast<double>(3 * x + y) / (z + 2); // static_cast is a type conversion operator

    // cout << "Formula 1: " << formula_1 << endl;
    // cout << "Formula 2: " << formula_2 << endl;
    // cout << "Formula 3: " << formula_3 << endl;
    // cout << "Formula 4: " << formula_4 << endl;

    /*
    5. What is the output of the following program lines when they are embedded in a correct program that declares all variables to be of type char? a = 'b'; b = 'c'; c = a;
    cout << a << b << c << 'c';
    */

    // char a = 'b', b = 'c', c = a;
    // cout << a << b << c << 'c'; // b c b c

    /*
    6. What is the output of the following program lines when they are embedded in a correct program that declares number to be of type int? number = (1/3) * 3;
    cout << "(1/3) * 3 is equal to " << number;
    */
    // int number = (1/3) * 3;
    // cout << "(1/3) * 3 is equal to " << number << endl;
    // Integer division truncates any fractional part, so 1 / 3 evaluates to 0.

    /*
    7. Write a complete C++ program that reads two whole numbers into two variables of type int and then outputs both the whole number part and the remainder when the first number is divided by the second. This can be done using the operators / and %.    
    */
    // int num1, num2, result, remainder;
    // cout << "Enter num1 and num2: " << endl;
    // cin >> num1 >> num2;

    // result  = num1 / num2;

    // remainder = num1 % num2;

    // cout << "Result: " << result << ", Remainder: " << remainder << endl;

    /*
    8. Given the following fragment that purports to convert from degrees Celsius to degrees Fahrenheit, answer the following questions: double c = 20; double f;
    f = (9/5) * c + 32.0; a. What value is assigned to f? b. Explain what is actually happening, and what the programmer likely wanted. c. Rewrite the code as the programmer intended.    
    */
    double c = 20;
    double f;
    f = (9.0/5.0) * c + 32.0; // 52
    cout << f << endl;

    return 0;
}