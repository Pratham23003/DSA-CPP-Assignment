// Pattern 45: 4x6 grid of sequential numbers
#include<iostream>
using namespace std;

int main() {
    int rows = 4, cols = 6;
    
    cout << "Pattern 45:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
