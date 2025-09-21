// Pattern 47: Right-angled triangle with blue/black asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 47:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 5) {
                cout << "* "; // Black asterisk for last row
            } else {
                cout << "* "; // Blue asterisk for other rows
            }
        }
        cout << endl;
    }
    
    return 0;
}
