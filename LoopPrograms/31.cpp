// 31. Write a program to reverse a given number
#include<iostream>
using namespace std;

int main() {
    int number, reversed = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int original = number;
    
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}
