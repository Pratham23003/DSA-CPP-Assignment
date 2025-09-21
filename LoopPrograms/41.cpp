// 41. Write a program to print all Armstrong numbers under 1000.
#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    
    return sum == original;
}

int main() {
    cout << "Armstrong numbers under 1000:" << endl;
    
    for (int i = 0; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
