// Pattern 42: 4x5 grid of asterisks with blue first column
#include<iostream>
using namespace std;

int main() {
    int rows = 4, cols = 5;
    
    cout << "Pattern 42:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (j == 1) {
                cout << "* "; // Blue asterisk (represented as regular *)
            } else {
                cout << "* "; // Black asterisk
            }
        }
        cout << endl;
    }
    
    return 0;
}
