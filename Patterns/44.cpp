// Pattern 44: 4x6 grid of same numbers per row
#include<iostream>
using namespace std;

int main() {
    int rows = 4, cols = 6;
    
    cout << "Pattern 44:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}
