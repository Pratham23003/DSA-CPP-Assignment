// 10. WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input time format – "HH:MM"
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int hours, minutes;
    char colon;
    
    cout << "Enter time in HH:MM format: ";
    cin >> hours >> colon >> minutes;
    
    // Validate input
    if (colon != ':') {
        cout << "Invalid format. Please use HH:MM format." << endl;
        return 1;
    }
    
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time values." << endl;
        return 1;
    }
    
    cout << "Time – " << setfill('0') << setw(2) << hours 
         << ":" << setfill('0') << setw(2) << minutes << endl;
    
    return 0;
}

