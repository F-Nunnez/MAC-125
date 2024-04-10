//Display 7.3 A Class Member Variable p.298
#include <iostream>
#include <cstdlib>
using namespace std;

class DayOfYear {
    
    public:
        DayOfYear(int monthValue, int dayValue);
        DayOfYear(int monthValue);
        DayOfYear(); 
        void input();
        void output();
        int getMonthNumber();
        int getDay();
    private:
        int month;
        int day;
        void testDate();
};

class Holiday {
    
    public:
        Holiday(); // Initializes to Janurary 1 with no parking enforcement
        Holiday(int month, int day, bool theEnforcement);
        void output();
    private:
        DayOfYear date; // member variale of a class type
        bool parkingEnforcement; // true if enforced
};

int main()
{   
    Holiday h(2, 14, true);
    cout << "Testing the class Holiday.\n";
    h.output();
    
    return 0;

}

Holiday::Holiday() // Invocations of constructors from the class
    : date(1, 1), parkingEnforcement(false) 
    {/*Intentionally empty*/}
    
Holiday::Holiday(int month, int day, bool theEnforcement)
    : date(month, day), parkingEnforcement(theEnforcement)
    {/*Intentionally empty*/}
    
void Holiday::output() {
    
    date.output();
    cout << endl;
    if (parkingEnforcement)
        cout << "Parking laws will be enforced.\n";
    else 
        cout << "Parking laws will not be enforced.\n";
}

DayOfYear::DayOfYear(int monthValue, int dayValue)
    : month(monthValue), day(dayValue) {
        
        testDate();
    }

//uses iostream and cstlib:
void DayOfYear::testDate() {
    
    if ((month < 1) || (month > 12)) {
        cout << "Illegal month value!\n";
        exit(1);
    }
    if ((day < 1) || (day > 31)) {
        cout << "Illegay day value!\n";
        exit(1);
    }
}

void DayOfYear::output() {
    
    switch(month) {
        
        case 1:
            cout << "January "; break;
        case 2:
            cout << "February "; break;
        case 3:
            cout << "March "; break;
        case 4:
            cout << "April "; break;    
        case 5:
            cout << "May "; break;
        case 6:
            cout << "June "; break;
        case 7:
            cout << "July "; break;    
        case 8:
            cout << "August "; break;    
        case 9:
            cout << "September "; break;    
        case 10:
            cout << "October "; break;
        case 11:
            cout << "November "; break;    
        case 12:
            cout << "December "; break;
        default:
            cout << "Error in DayOfYear::output() ";
    }
    cout << day;
}
    
    