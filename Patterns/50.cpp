// Pattern 50: Centered pyramid with alternating blue/black asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 50:" << endl;
    
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
    
    return 0;
}
