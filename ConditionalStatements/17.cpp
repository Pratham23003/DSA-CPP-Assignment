// 17. Write a program that takes a start year and an end year from the user and prints all the leap years in that range.
#include<iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear;
    
    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;
    
    if (startYear > endYear) {
        cout << "Start year should be less than or equal to end year." << endl;
        return 1;
    }
    
    cout << "Leap years between " << startYear << " and " << endYear << ":" << endl;
    
    bool foundLeapYear = false;
    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            cout << year << " ";
            foundLeapYear = true;
        }
    }
    
    if (!foundLeapYear) {
        cout << "No leap years found in the given range." << endl;
    } else {
        cout << endl;
    }
    
    return 0;
}

