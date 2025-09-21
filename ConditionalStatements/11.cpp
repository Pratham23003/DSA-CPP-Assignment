// 11. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include<iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;
    
    cout << "\nCharacter\tASCII Code\tType" << endl;
    cout << "---------\t----------\t----" << endl;
    
    // Display first character with conditional formatting
    cout << ch1 << "\t\t" << (int)ch1;
    if ((int)ch1 >= 65 && (int)ch1 <= 90) {
        cout << "\t\tUppercase";
    } else if ((int)ch1 >= 97 && (int)ch1 <= 122) {
        cout << "\t\tLowercase";
    } else if ((int)ch1 >= 48 && (int)ch1 <= 57) {
        cout << "\t\tDigit";
    } else {
        cout << "\t\tSpecial";
    }
    cout << endl;
    
    // second char
    cout << ch2 << "\t\t" << (int)ch2;
    if ((int)ch2 >= 65 && (int)ch2 <= 90) {
        cout << "\t\tUppercase";
    } else if ((int)ch2 >= 97 && (int)ch2 <= 122) {
        cout << "\t\tLowercase";
    } else if ((int)ch2 >= 48 && (int)ch2 <= 57) {
        cout << "\t\tDigit";
    } else {
        cout << "\t\tSpecial";
    }
    cout << endl;
    
    // third charctrp
    cout << ch3 << "\t\t" << (int)ch3;
    if ((int)ch3 >= 65 && (int)ch3 <= 90) {
        cout << "\t\tUppercase";
    } else if ((int)ch3 >= 97 && (int)ch3 <= 122) {
        cout << "\t\tLowercase";
    } else if ((int)ch3 >= 48 && (int)ch3 <= 57) {
        cout << "\t\tDigit";
    } else {
        cout << "\t\tSpecial";
    }
    cout << endl;
    
    return 0;
}

