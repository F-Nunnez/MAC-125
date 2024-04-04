#include <iostream>
using namespace std;

int main() {
/*
Self-Test Exercises
9. Give an output statement that will produce the following message on the screen.
The answer to the question of Life, the Universe, and Everything is 42.
*/
cout << "The answer to the question of\n"
    << "Life, the Universe, and Everything is 42.\n";

/*10. Give an input statement that will fill the variable theNumber (of type int) with a number typed in at the keyboard. Precede the input statement with a prompt statement asking the user to enter a whole number.*/

int theNumber;
cout << "Enter a whole number:\n";
cin >> theNumber;

/*11. What statements should you include in your program to ensure that when a number of type double is output, it will be output in ordinary notation with three digits after the decimal point?*/

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(3);

/*12. Write a complete C++ program that writes the phrase Hello world to the screen. The program does nothing else.*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello world\n";

    return 0;
}

/*13. Give an output statement that produces the letter 'A', followed by the newline character, followed by the letter 'B', followed by the tab character, followed by the letter 'C'.*/

cout << "A\n" << "B\t" << "C";
cout << "A" << endl << "B\t" << "C";
cout << "A\nB\tC";

/*14. The following code intends to input a user’s first name, last name, and age. However, it has an error. Fix the code.*/

// string fullName;
string first, last;
int age;
cout << "Enter your first and last name." << endl;
cin >> first >> last;
cout << "Enter your age." << endl;
cin >> age;
cout << "You are " << age << " years old, " << first << " " << last << endl;

/*15. What will the following code output?*/
string s1 = "5";
string s2 = "3";
string s3 = s1 + s2;
cout << s3 << endl;
// 53

    return 0;
}
