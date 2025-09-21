// Pattern 55: Complex hourglass/butterfly pattern with alternating colors
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 55:" << endl;
    
    // Upper half of hourglass
    for (int i = 1; i <= 4; i++) {
        // Left side - blue dots
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Blue dots
        }
        
        // Middle spaces
        for (int j = 1; j <= 9 - 2*i; j++) {
            cout << "  ";
        }
        
        // Right side - black dots
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Black dots
        }
        cout << endl;
    }
    
    // Middle row - all black dots
    for (int j = 1; j <= 9; j++) {
        cout << "* "; // Black dots
    }
    cout << endl;
    
    // Lower half of hourglass
    for (int i = 4; i >= 1; i--) {
        // Left side - black dots
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Black dots
        }
        
        // Middle spaces
        for (int j = 1; j <= 9 - 2*i; j++) {
            cout << "  ";
        }
        
        // Right side - black dots
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Black dots
        }
        cout << endl;
    }
    
    return 0;
}
