// Pattern 53: Centered diamond with alternating colors
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 53:" << endl;
    
    // Upper half of diamond
    for (int i = 1; i <= 5; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        
        // Print asterisks with spaces between them
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                cout << "* "; // Blue asterisk for odd rows
            } else {
                cout << "* "; // Black asterisk for even rows
            }
        }
        cout << endl;
    }
    
    // Lower half of diamond
    for (int i = 4; i >= 1; i--) {
        // Print leading spaces for centering
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        
        // Print asterisks with spaces between them
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                cout << "* "; // Blue asterisk for odd rows
            } else {
                cout << "* "; // Black asterisk for even rows
            }
        }
        cout << endl;
    }
    
    return 0;
}
