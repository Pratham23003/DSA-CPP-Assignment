// 24. Write a program to calculate sum of first N odd natural numbers
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0, num = 1;
    
    cout << "Enter the value of N: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }
    
    cout << "Sum of first " << n << " odd natural numbers is: " << sum << endl;
    
    return 0;
}

