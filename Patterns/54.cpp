// Pattern 54: Centered pyramid with sequential numbers
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 54:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        
        // Print numbers with spaces between them
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
