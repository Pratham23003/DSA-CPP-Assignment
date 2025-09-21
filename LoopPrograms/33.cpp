// 33. Write a program to print first N terms of Fibonacci series.
#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the value of N: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    
    cout << "First " << n << " terms of Fibonacci series: ";
    
    if (n == 0) {
        cout << "No terms to display." << endl;
    } else if (n == 1) {
        cout << "0" << endl;
    } else {
        int a = 0, b = 1;
        cout << a << " " << b << " ";
        
        for (int i = 2; i < n; i++) {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
    
    return 0;
}
