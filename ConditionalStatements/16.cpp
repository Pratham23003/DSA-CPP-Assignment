// 16. Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. 
// The user should specify the type of conversion.
#include<iostream>
using namespace std;

int main() {
    int choice;
    float temperature, convertedTemp;
    
    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << "°F = " << convertedTemp << "°C" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << "°C = " << convertedTemp << "°F" << endl;
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }
    
    return 0;
}

