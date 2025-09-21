// 40. Write a program to check whether a given number is an Armstrong number or not.
#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    
    return sum == original;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
