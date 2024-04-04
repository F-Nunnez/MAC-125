//Constructor example p 283 Chapeter 6

#include <iostream>
using namespace std;

class DayOfYear {

    public:
        // Constructor declaration   
        // Initializes the month and day to arguments.  
        DayOfYear(int monthValue, int dayValue); 
        // Member functions
        void input();
        void output();
        // Function to set month and day
        void set(int newMonth, int newDay);
        int getMonth(); // Function to get the month
        int getDay(); // Function to get the day
    private:
        int month; // Member variable to store the month
        int day; // Member variable to store the day   
};

// Constructor definition
DayOfYear::DayOfYear(int monthValue, int dayValue) {
    month = monthValue;
    day = dayValue;
}

// Function to set month and day (The void keyword indicates that the functions do not return any value.)
void DayOfYear::set(int newMonth, int newDay) {
    month = newMonth; // Initialize month with monthValue
    day = newDay; // Initialize day with dayValue
}
// Function to get the month
int DayOfYear::getMonth() {
    return month;
}
// Function to get the day
int DayOfYear::getDay() {
    return day;
}

int main() {    
    // Create objects of class DayOfYear and initialize them with specific values
    DayOfYear date1(7, 4);
    DayOfYear date2(5, 5);
    
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Day: " << date1.getDay() << endl;

    return 0;
}