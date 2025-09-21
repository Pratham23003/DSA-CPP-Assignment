// 26. Write a program to calculate sum of cubes of first N natural numbers
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter the value of N: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    
    cout << "Sum of cubes of first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
