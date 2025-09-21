// 38. Write a program to print all Prime numbers between two given numbers.
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
    int start, end;
    
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;
    
    if (start > end) {
        cout << "Start number should be less than or equal to end number." << endl;
        return 1;
    }
    
    cout << "Prime numbers between " << start << " and " << end << ":" << endl;
    
    bool foundPrime = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            foundPrime = true;
        }
    }
    
    if (!foundPrime) {
        cout << "No prime numbers found in the given range." << endl;
    } else {
        cout << endl;
    }
    
    return 0;
}
