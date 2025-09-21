// 8. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include<iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;
    
    cout << "\nCharacter\tASCII Code" << endl;
    cout << "---------\t----------" << endl;
    cout << ch1 << "\t\t" << (int)ch1 << endl;
    cout << ch2 << "\t\t" << (int)ch2 << endl;
    cout << ch3 << "\t\t" << (int)ch3 << endl;
    
    return 0;
}
