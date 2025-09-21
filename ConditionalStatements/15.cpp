// 15. Create a program that takes the lengths of three sides of a triangle as input and determines 
// whether the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

int main() {
    float side1, side2, side3;
    
    cout << "Enter length of first side: ";
    cin >> side1;
    cout << "Enter length of second side: ";
    cin >> side2;
    cout << "Enter length of third side: ";
    cin >> side3;
    
    // Check if sides can form a triangle
    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        cout << "These sides cannot form a triangle." << endl;
    } else if (side1 == side2 && side2 == side3) {
        cout << "This is an equilateral triangle." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "This is an isosceles triangle." << endl;
    } else {
        cout << "This is a scalene triangle." << endl;
    }
    
    return 0;
}

