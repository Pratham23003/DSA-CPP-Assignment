// Pattern 48: Right-angled triangle with sequential numbers
#include<iostream>
using namespace std;

int main() {
    cout << "Pattern 48:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
