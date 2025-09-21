// 32. Write a program to find the Nth term of the Fibonacci series.
#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    
    cout << "Enter the value of N: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    
    int result = fibonacci(n);
    cout << "The " << n << "th term of Fibonacci series is: " << result << endl;
    
    return 0;
}
