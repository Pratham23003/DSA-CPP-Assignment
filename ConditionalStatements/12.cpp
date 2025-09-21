// 12. Create a program that takes a person's age as input and classifies them into different age groups 
// (e.g., child, teenager, adult, senior).
#include<iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age < 0) {
        cout << "Invalid age. Please enter a +ve number." << endl;
    } else if (age >= 0 && age <= 12) {
        cout << "Child" << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "Teen" << endl;
    } else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;
    } else {
        cout << "Senior" << endl;
    }
    
    return 0;
}

