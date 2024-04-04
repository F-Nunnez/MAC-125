#include <iostream>
using namespace std;

int main() {

    int numberOfItems, count, caloriesForItems, totalCalories;

    cout << "How many items did you eat today? ";
    cin >> numberOfItems;
    totalCalories = 0;
    count = 1;
    cout << "Enter the number of calories in each of the\n" << numberOfItems << " items eaten:\n";

    while (count++ <= numberOfItems) {

        cin >> caloriesForItems;
        totalCalories = totalCalories + caloriesForItems;
    }

    cout << "Total calories eaten today = " << totalCalories << endl;

    return 0;
}