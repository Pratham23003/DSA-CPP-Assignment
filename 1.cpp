// 1. Write a program to calculate average of three integers.
#include<iostream>
using namespace std;

int calcAvg(int a, int b, int c) {
    return (a + b + c) / 3;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three integer numbers:" << endl;
    cin >> num1 >> num2 >> num3;
    
    int result = calcAvg(num1, num2, num3);
    
    cout << "The average is: " << result << endl;
    return 0;
}