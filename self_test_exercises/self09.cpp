/*
    Self-Test Exercises (continued)
7. Since character strings are just arrays of char, why does the text caution you not to confuse the following declaration and initialization?

    char shortString[] = "abc";
    char shortString[] = { 'a', 'b', 'c'};

    These are not equivalent. The first of these places the null character '\0' in the array after the characters 'a', 'b', and 'c'. The second only assigns the successive positions 'a', 'b', and 'c' but does not put a '\0' anywhere.

8. Given the following declaration and initialization of the string variable, write a loop to assign 'X' to all positions of this string variable, keeping the length the same.

    char ourString[15] = "Hi there!";

9. Consider the following declaration of a C-string variable, where SIZE is a defined constant:

    char ourString[SIZE];

    The C-string variable ourString has been assigned in code not shown here. For correct C-string variables, the following loop reassigns all positions of ourString the value 'X', leaving the length the same as before. Assume this code fragment is embedded in an otherwise complete and correct program. Answer the questions following this code fragment.

    int index = 0;
    while (ourString[index] != '\0') {
        ourString[index] = 'X';
        index++;
    }

    a. Explain how this code can destroy the contents of memory beyond the end of the array.

        If the C-string variable does not have a null terminator, '\0', the loop can run beyond the memory allocated for the C-string, destroying the contents of memory there. To protect memory beyond the end of the array, change the while condition as shown in b.

    b. Modify this loop to protect against inadvertently changing memory beyond the end of the array.

        int index = 0;
        while (ourString[index] != '\0' && index < SIZE) {
            ourString[index] = 'X';
            index++;
        }

10. Write code using a library function to copy the string constant "Hello" into the string variable declared next. Be sure to #include the necessary header file to get the declaration of the function you use.

    #include <cstring>
    char aString[10];
    strcpy(aString, "Hello");

11. What string will be output when this code is run? (Assume, as always, that this code is embedded in a complete, correct program.)

    char song[10] = "I did it";
    char franksSong[20];
    strcpy ( franksSong, song );
    strcat ( franksSong, "my way!");
    cout << franksSong << endl;

    I did it my way! 

12. What is the problem (if any) with this code?

    char aString[20] = "How are you?";
    strcat(aString, "Good, I hope.");

    The string "good, I hope." is too long for aString. A chunk of memory that does not belong to the array aString will be overwritten.

13. Consider the following code (and assume it is embedded in a complete and correct program and then run):

    char a[80], b[80];
    cout << "Enter some input:\n";
    cin >> a >> b; // >> The >> time 
    cout << a << '-' << b << "END OF OUTPUT\n";

    The-time<END OF OUTPUT
    
    If the dialogue begins as follows, what will be the next line of output?

    Enter some input: The
    time is now.

14. Consider the following code (and assume it is embedded in a complete and correct program and then run):

    char myString[80];
    cout << "Enter a line of input:\n";
    cin.getline(myString, 6);
    cout << myString << "<END OF OUTPUT";

If the dialogue begins as follows, what will be the next line of output?
Enter a line of input:
May the hair on your toes grow long and curly.  

15. Consider the following code (and assume that it is embedded in a complete and correct program and then run):

    char c1, c2, c3, c4;
    cout << "Enter a line of input:\n";
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cin.get(c4);
    cout << c1 << c2 << c3 << c4 << "END OF OUTPUT";
    
    If the dialogue begins as follows, what will be the next line of output?

    Enter a line of input: a b c d e f g
    a b END OF OUTPUT
16. Consider the following code (and assume that it is embedded in a complete and correct program and then run):

    char next;
    int count = 0;
    cout << "Enter a line of input:\n";
    cin.get(next);
    while (next != '\n') {
        if ((count % 2) == 0)
            cout << next;
        count++;
        cin.get(next);
    }
    
    If the dialogue begins as follows, what will be the next line of output?

    Enter a line of input: abcdef gh

        ace h

17. Suppose that the program described in Self-Test Exercise 16 is run and the dialogue begins as follows (instead of beginning as shown in Self-Test Exercise 16).

What will be the next line of output? Enter a line of input: 0 1 2 3 4 5 6 7 8 9 10 11

18. Consider the following code (and assume that it is embedded in a complete and correct program and then run):

    char next; int count = 0;
    cout << "Enter a line of input:\n";
    cin >> next;
    while (next != '\n') {
        if ((count % 2) == 0)
            cout << next;
        count++;
        cin >> next;
    }
    
    If the dialogue begins as follows, what will be the next line of output?

    Enter a line of input: 0 1 2 3 4 5 6 7 8 9 10 11

    1234567891 1

    In your program, the variable next is evaluated one character at a time using the cin.get(next) 

19. Consider the following code (and assume that it is embedded in a complete and correct program and then run):

    cout << "Enter a line of input:\n";
    char next;
    do {
            cin.get(next);
            cout << next;
    } while ( (! isdigit(next)) && (next != '\n') );
    cout << "<END OF OUTPUT";

If the dialogue begins as follows, what will be the next line of output?

    Enter a line of input: I'll see you at 10:30 AM.
    I'll see you at 1<END OF OUTPUT

20. Write some C++ code that will read a line of text and echo the line with all uppercase letters deleted.

    #include <iostream>
    #include <cctype>
    using namespace std;

    int main() {

        cout << "Enter a line of input:\n";
        char next;
        do {
                int i = 0;
                cin.get(next);
                
                if (!isupper(next)) {
                    cout << next;
                }
                
        } while ( (next != '\n') );
        cout << "<END OF OUTPUT";
    }

21. Rewrite the definition of the newLine function in Display 9.2 but this time use the ignore member function.

*/