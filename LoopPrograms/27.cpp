// 27. Write a program to calculate factorial of a number
#include<iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "Factorial of " << n << " is: " << factorial << endl;
    
    return 0;
}
