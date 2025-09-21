// 7. Write a program to input an ASCII code from the user and print its corresponding character.
#include<iostream>
using namespace std;

int main() {
    int asciiCode;
    
    cout << "Enter ASCII code: ";
    cin >> asciiCode;
    
    if (asciiCode >= 0 && asciiCode <= 127) {
        cout << "Character corresponding to ASCII code " << asciiCode << " is: '" << (char)asciiCode << "'" << endl;
    } else {
        cout << "Invalid ASCII code. Please enter a value between 0 and 127." << endl;
    }
    
    return 0;
}
