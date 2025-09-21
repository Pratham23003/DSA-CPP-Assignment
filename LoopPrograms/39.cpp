// 39. Write a program to find next Prime number of a given number.
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 1) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }
    
    int nextPrime = number + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    
    cout << "Next prime number after " << number << " is: " << nextPrime << endl;
    
    return 0;
}
