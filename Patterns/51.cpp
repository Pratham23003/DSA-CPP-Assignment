// Pattern 51: Decreasing right-angled triangle with blue asterisks
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 51:" << endl;
    
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Blue asterisks
        }
        cout << endl;
    }
    
    return 0;
}
