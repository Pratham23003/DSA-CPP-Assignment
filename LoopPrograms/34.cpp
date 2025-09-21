// 34. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<iostream>
using namespace std;

bool isFibonacci(int num) {
    if (num < 0) return false;
    
    int a = 0, b = 1;
    if (num == 0 || num == 1) return true;
    
    while (b <= num) {
        if (b == num) return true;
        int c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (isFibonacci(number)) {
        cout << number << " is present in the Fibonacci series." << endl;
    } else {
        cout << number << " is not present in the Fibonacci series." << endl;
    }
    
    return 0;
}
