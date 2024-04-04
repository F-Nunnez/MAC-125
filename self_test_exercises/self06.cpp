/*
    Self-Test Exercises 1.

    Given the following structure and structure variable declaration:

    struct CDAccountV2 {
        double balance;
        double interestRate;
        int term;
        char initial1;
        char initial2;
    }; CDAccountV2 account;

    what is the type of each of the following? Mark any that are not correct.

    a. account.balance 
        
        double

    b. account.interestRate 

        double 

    c. CDAccountV1.term 

        illegal—cannot use a structure tag instead of a structure variable 

    d. account.initial2 

            char 

    e. account 

        CDAccountV1

2. Consider the following type definition:

    struct ShoeType {
        char style;
        double price;
    };

Given the previous structure-type definitions, what will be the output produced by the following code? 

    #include <iostream> // Include necessary library for input/output operations
    using namespace std;

    // Define a structure called ShoeType to store information about shoes
    struct ShoeType {
        char style; // Define a member variable to store the style of the shoe
        double price; // Define a member variable to store the price of the shoe
    };

    int main() {
        // Declare two variables of type ShoeType to represent two different shoes
        ShoeType shoe1, shoe2;

        // Initialize the members of shoe1 with specific values
        shoe1.style = 'A';   // Assign the style 'A' to shoe1
        shoe1.price = 9.99;  // Assign the price $9.99 to shoe1

        // Print the style and price of shoe1
        cout << shoe1.style << " $" << shoe1.price << endl;

        // Copy the contents of shoe1 to shoe2
        shoe2 = shoe1;

        // Modify the price of shoe2 (divide by 9)
        shoe2.price = shoe2.price / 9;

        // Print the style and modified price of shoe2
        cout << shoe2.style << " $" << shoe2.price << endl;

        return 0; // Indicate successful completion of the program
    }

    A $9.99
    A $1.11

3. What is the error in the following structure definition?     

    struct Stuff {
        int b;
        int c;
    }❌
    int main( ) {
        Stuff x; // other code
    }

    A semicolon is missing from the end of the definition of Stuff.

    4. Given the following struct definition:
    
    struct A {
        int b;
        int c;
    };

    declare x to have this structure type. Initialize the members of x, member b and member c, to the values 1 and 2, respectively.

    #include <iostream>
    using namespace std;

    // Define the struct A
    struct A {
        int b;
        int c;
    };

    int main() {
        // Declare a variable x with the struct type A and initialize its members
        A x = {1, 2};

        // Print the values of x.b and x.c
        cout << "x.b: " << x.b << endl;
        cout << "x.c: " << x.c << endl;

        return 0;
    }

5. Here is an initialization of a structure type. State what happens with each initialization. Note any problems with these initializations.

    struct Date {
        int month;
        int day;
        int year;
    };

    a. Date dueDate = {12, 21};

        Too few initializers; not a syntax error. After initialization, month= =12, day= =21, and year= =0. Member variables not provided an initializer are initialized to a zero of the appropriate type.

    b. Date dueDate = {12, 21, 1995}; 

        Correct after initialization. 12= =month, 21= = day, and 1995= = year. 

    c. Date dueDate = {12, 21, 19, 95};

        Error: too many initializers. 

6. Write a definition for a structure type for records consisting of a person’s wage rate, accrued vacation (which is some whole number of days), and status (which is either hourly or salaried). Represent the status as one of the two char values 'H' and 'S'. Call the type EmployeeRecord.

7. Give a function definition corresponding to the following function declaration. (The type ShoeType is given in Self-Test Exercise 2.) 

    void readShoeRecord(ShoeType& newShoe); //Fills newShoe with values read from the keyboard.

8. Give a function definition corresponding to the following function declaration. (The type ShoeType is given in Self-Test Exercise 2.)

    ShoeType discount(ShoeType oldRecord);

    //Returns a structure that is the same as its argument, //but with the price reduced by 10%.

        #include <iostream> // Include necessary library for input/output operations
        using namespace std;

        // Define a structure called ShoeType to store information about shoes
        struct ShoeType {
            char style; // Define a member variable to store the style of the shoe
            double price; // Define a member variable to store the price of the shoe
        };
        
        //7. Give a function definition corresponding to the following function
        //declaration. (The type ShoeType is given in Self-Test Exercise 2.) 

        //void readShoeRecord(ShoeType& newShoe);
        //Fills newShoe with values read from the keyboard.
        
        void readShoeRecord(ShoeType& newShoe) {
            cout << "Enter new shoe style value: (of type char)\n";
            cin >> newShoe.style;
            cout << "Enter new shoe price value:\n";
            cin >> newShoe.price;
            cout << "newShoe.style: " << newShoe.style << endl;
            cout << "newShoe.price: " << newShoe.price << endl;
        }
        
        //8. Give a function definition corresponding to the following function declaration.
        //(The type ShoeType is given in Self-Test Exercise 2.)

        //ShoeType discount(ShoeType oldRecord);
        //Returns a structure that is the same as its argument, //but with the price reduced by 10%.
        
        ShoeType discount(ShoeType oldRecord) {
            ShoeType temp;    
            
            temp.style = oldRecord.style;
            temp.price = oldRecord.price * 0.90;
            
            return temp;
        }
        
        int main() {
            // Declare two variables of type ShoeType to represent two different shoes
            ShoeType shoe1, shoe2;

            // Initialize the members of shoe1 with specific values
            shoe1.style = 'A';   // Assign the style 'A' to shoe1
            shoe1.price = 100.00;  // Assign the price $9.99 to shoe1

            // Print the style and price of shoe1
            cout << shoe1.style << " $" << shoe1.price << endl;

            // Copy the contents of shoe1 to shoe2
            shoe2 = shoe1;

            // Modify the price of shoe2 (divide by 9)
            shoe2.price = shoe2.price / 9;

            // Print the style and modified price of shoe2
            cout << shoe2.style << " $" << shoe2.price << endl;
            
            ShoeType newShoe;
            
            readShoeRecord(newShoe);
            
            ShoeType oldRecord = discount(shoe1);
            
            cout << "With 10 % Discount: $"
                << oldRecord.price << " of $" << shoe1.price << endl;
            
            return 0; // Indicate successful completion of the program
        }

9. Here we have redefined the class DayOfYear from Display 6.3 so that it now has one additional member function called input. Write an appropriate definition for the member function input.

    class DayOfYear {
        public: void input( ); 
        void output( ); 
        int month; 
        int day;
    };
    //Uses iostream
    void DayOfYear::input() {
        cout << "Enter month:\n";
        cin >> month;
        cout << "Enter day:\n";
        cin >> day;
    }

10. Given the following class definition, write an appropriate
definition for the member function set.

    class Temperature {
        public:
            void set(double newDegrees, char newScale);
            //Sets the member variables to the values given as
            //arguments.
            double degrees;
            char scale;
            //'F' for Fahrenheit or 'C' for Celsius.
    };

    void Temperature::set(double newDegrees, char newScale) {
        degrees = newDegrees;
        scale = newScale;
    }

11. Carefully distinguish between the meaning and use of the dot operator and the scope resolution operator, ::.

    Both the dot operator and the scope resolution operator are
    used with member names to specify of what class or structure the member name is a member. If class DayOfYear is as defined in Display 6.3 and today is an object of the class DayOfYear, then the member month may be accessed with the dot operator: today.month. When we give the definition of a member function, the scope resolution operator is used to tell the compiler that this function is the one declared in the class.

12. Suppose your program contains the following class definition:

    class Automobile {
        public:
            void setPrice(double newPrice);
            void setProfit(double newProfit);
            double getPrice( );
        private:
            double price;
            double profit;
            double getProfit( );
    };

    and suppose the main function of your program contains the
    following declaration and that the program somehow sets the values of all the member variables to some values:

    Automobile hyundai, jaguar;

    Which of the following statements are then allowed in the main function of your program?

        hyundai.price = 4999.99; // Ilegal price is private.
        jaguar.setPrice(30000.97); // Legal
        double aPrice, aProfit; // Legal
        aPrice = jaguar.getPrice( ); // Legal
        aProfit = jaguar.getProfit( ); // Ilegal is private.
        aProfit = hyundai.getProfit( ); // Ilegal is private.
        hyundai = jaguar; // Legal

        #include <iostream>
        #include <string>

        using namespace std;

        class Automobile {
            public:
                void setPrice(double newPrice);
                void setProfit(double newProfit, double newCost);
                double getPrice( );
            private:
                double price;
                double profit;
                double cost;
                double getProfit( ); // Declaring private function to access profit
            public:
                double getProfitPublic() { // Public function to access profit

                    return getProfit();
                }
        };

        //Setters
        void Automobile::setPrice(double newPrice) {
                price = newPrice;
        }

        void Automobile::setProfit(double newProfit, double newCost) {
                profit = newProfit;
                cost = newCost;
        }

        double Automobile::getPrice() { // return function declare int or double
            return price;
        }

        double Automobile::getProfit() {

            return profit - cost;
        }

        int main() {

            Automobile hyundai, jaguar;

            hyundai.setPrice(35000.97); // Legal, set the price for hyundai

            jaguar.setPrice(40000.87); // Legal, set the price for jaguar

            // You can access the prices using the getPrice function
            double hPrice, hProfit, jPrice, jProfit; // Legal

            hPrice = hyundai.getPrice(); // Legal
            jPrice = jaguar.getPrice();

            cout << "Hyundai Price: " << hPrice << endl;
            cout << "Jaguar Price: " << jPrice << endl;

            // Set price and cost for hyundai to determine profit
            hyundai.setProfit(hPrice, 25000);
            // Set price and cost for jaguar to determine profit
            jaguar.setProfit(jPrice, 35000);

            // You can access the profit using the getProfitPublic function
            double hyundaiProfit = hyundai.getProfitPublic();
            cout << "Hyundai Profit: " << hyundaiProfit << endl;
            double jaguarProfit = jaguar.getProfitPublic();
            cout << "Jaguar Profit: " << jaguarProfit << endl;

            return 0;
        }

13. Suppose you change Self-Test Exercise 12 so that in the
definition of the class Automobile all member variables are public
instead of private. How would this change your answer to the question in Self-Test Exercise 12? After the change, they would all be legal.

    class Automobile {
        public:
            void setPrice(double newPrice);
            void setProfit(double newProfit);
            double getPrice( );

            double price;
            double profit;
            double getProfit( );
    };

14. Explain what public: and private: mean in a class definition.

    All members (member variables and member functions) that
    are marked private: can only be accessed by name in the definitions of member functions (both public and private) of the same class. Members marked public: have no restrictions on where they can be used.

        #include <iostream>
        #include <string>

        using namespace std;

        class BankAccount {
            public:
                // Public member functions
                void deposit(double amount); // Function to deposit money into the account
                double getBalance(); // Function to retrieve the account balance
            private:
                // Private member variables
                double balance; // Balance of the bank account
                // Private member functions
                void updateBalance(double newBalance); // Function to update the balance (restricted to internal use)
            };

            // Implementation of public member functions
            void BankAccount::deposit(double amount) {
                // Add the deposited amount to the balance
                balance += amount;
                // Display a message indicating successful deposit
                cout << "Deposit of $" << amount << " successful!" << endl;
            }

            double BankAccount::getBalance() {
                // Return the current balance
                return balance;
            }

            // Implementation of private member functions
            void BankAccount::updateBalance(double newBalance) {
                // Update the balance (restricted to internal use)
                balance = newBalance;
            }

            int main() {
                // Create an instance of the BankAccount class
                BankAccount myAccount;

                // Deposit $100 into the account
                myAccount.deposit(100.00);

                // Attempting to access balance directly (shouldn't work because it's private)
                // cout << "Current balance: $" << myAccount.balance << endl; // This line will cause a compilation error

                // Retrieve and display the balance using the public member function
                cout << "Current balance: $" << myAccount.getBalance() << endl;

                // Attempting to directly update balance(shouldn't work because it's private)
                // myAccount.balance = 1000.00; // This line will cause a compilation error

                return 0;
            }

15.
    a. How many public: sections are required in a class for the class to be useful?

        Only one. The compiler warns if you have no public: members in a class (or struct, for that matter).

    b. How many private: sections are required in a class?

        None, but we normally expect to find at least one private: section in a class.

16. When you define a C++ class, should you make the member variables public or private? Should you make the member functions
public or private?

    The member variables should all be private. The member functions that are part of the interface should be public. You may also have auxiliary (helping) functions that are only used in the definitions of other member functions. These auxiliary functions should be private.

17. When you define a C++ class, what items are considered part of
the interface? What items are considered part of the implementation?

    All the declarations of private member variables are part of
    the implementation. (There should be no public member variables.) All the declarations for public member functions of the class (which are listed in the class definitions), as well as the explanatory comments for these declarations, are parts of the interface.    
*/