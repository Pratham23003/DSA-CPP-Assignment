// Pattern 52: Diamond-like pattern with blue asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 52:" << endl;
    
    // Upper half (decreasing triangle)
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Blue asterisks
        }
        cout << endl;
    }
    
    // Lower half (increasing triangle)
    for (int i = 2; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Blue asterisks
        }
        cout << endl;
    }
    
    return 0;
}
