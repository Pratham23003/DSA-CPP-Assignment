// 9. WAP to take date as an input in below given format and convert the date format and display the result as given below.
// User Input date format – "DD/MM/YYYY" (27/11/2022)
// Output format – "Day – DD , Month – MM , Year – YYYY" (Day – 27, Month – 07, Year – 2022)
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int day, month, year;
    char slash1, slash2;
    
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> day >> slash1 >> month >> slash2 >> year;
    
    // Validate input
    if (slash1 != '/' || slash2 != '/') {
        cout << "Invalid format. Please use DD/MM/YYYY format." << endl;
        return 1;
    }
    
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
        cout << "Invalid date values." << endl;
        return 1;
    }
    
    cout << "Day – " << setfill('0') << setw(2) << day 
         << " , Month – " << setfill('0') << setw(2) << month 
         << " , Year – " << year << endl;
    
    return 0;
}
