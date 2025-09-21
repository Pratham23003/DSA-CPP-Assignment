// Pattern 46: 5x5 swastika-like pattern with red asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 46:" << endl;
    
    // Row 1: Five red asterisks
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
    
    // Row 2: One red asterisk, three spaces, one red asterisk
    cout << "* ";
    for (int j = 1; j <= 3; j++) {
        cout << "  ";
    }
    cout << "* ";
    cout << endl;
    
    // Row 3: Five red asterisks
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
    
    // Row 4: One red asterisk, three spaces, one red asterisk
    cout << "* ";
    for (int j = 1; j <= 3; j++) {
        cout << "  ";
    }
    cout << "* ";
    cout << endl;
    
    // Row 5: Five red asterisks
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
    
    return 0;
}
