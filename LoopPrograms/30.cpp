// 30. Write a program to calculate LCM of two numbers
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

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
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
    
    int result = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}
