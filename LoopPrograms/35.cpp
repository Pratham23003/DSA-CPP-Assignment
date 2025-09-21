// 35. Write a program to calculate HCF of two numbers.
#include<iostream>
using namespace std;

int hcf(int a, int b) {
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
    
    int result = hcf(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}
