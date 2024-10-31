#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return (isLeapYear(year)) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int main() {
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month between 1 and 12." << endl;
        return 1;
    }

    cout << "Enter a year: ";
    cin >> year;

    int days = getDaysInMonth(month, year);
    if (days == -1) {
        cout << "Invalid input." << endl;
    } else {
        cout << days << " days" << endl;
    }

    return 0;
}