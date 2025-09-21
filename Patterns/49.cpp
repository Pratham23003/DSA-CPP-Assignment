// Pattern 49: Right-angled triangle with red letters A-E
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 49:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1) << " "; // Red letters
        }
        cout << endl;
    }
    
    return 0;
}
