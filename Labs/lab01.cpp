#include <iostream>
#include <string>

using namespace std;

// string first = "Ikki", middle="De", last = "Fenix", dot = ".";
// string first = "Shiryu", middle="De.", last = "Dragon", dot = ".";
string first = "Hyoga", middle="De", last = "Cisne", dot = ".";
// string first = "Shun", middle="", last = "Andromeda", dot = ".";

int main() {

    int z;
    for (z = 0; z < middle.length(); z++) {
        if(middle[middle.length()-1] != dot[0]) {
            middle = middle + dot;
        }
    }

    int i;
    for (i = 0; i < last.length(); i++) {
        cout << last[i];
    }
    cout << ", ";

    int j;
    for (j = 0; j < first.length(); j++) {
        cout << first[j];
    }
    cout << " ";
    
    int k;
    
    for (k = 0; k < middle.length(); k++) {        
        cout << middle[k];
    }

    return 0;

}