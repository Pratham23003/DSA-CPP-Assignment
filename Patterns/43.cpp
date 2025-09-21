// Pattern 43: C-shaped pattern with blue and black asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 43:" << endl;
    
    // Row 1: Five black asterisks
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
    
    // Rows 2-3: One blue asterisk, three spaces, one black asterisk
    for (int i = 2; i <= 3; i++) {
        cout << "* "; // Blue asterisk
        for (int j = 1; j <= 3; j++) {
            cout << "  "; // Three spaces
        }
        cout << "* "; // Black asterisk
        cout << endl;
    }
    
    // Row 4: Five black asterisks
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
    
    return 0;
}
