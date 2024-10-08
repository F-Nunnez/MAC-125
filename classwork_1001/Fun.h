#ifndef _FUN_H
#define _FUN_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Fun {
    string activity;
    string phrase;
    public:
        void input() {
            activity = "C++ Programming";
            phrase = "Hello World";
        }
        
        void printHelloWorld() {
            cout << "activity: " << activity << " \nphrase: " << phrase << endl;
        }
};      

#endif