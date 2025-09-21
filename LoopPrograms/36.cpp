// 36. Write a program to check whether two given numbers are co-prime numbers or not.
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive numbers." << endl;
        return 1;
    }
    
    int hcf = gcd(num1, num2);
    
    if (hcf == 1) {
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;
        cout << "Their HCF is: " << hcf << endl;
    }
    
    return 0;
}
