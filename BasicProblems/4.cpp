// 4. Write a program to calculate volume of a cuboid.
#include<iostream>
using namespace std;

float calcVolume(float length, float width, float height) {
    if (length <= 0 || width <= 0 || height <= 0) {
        cout << "Enter valid dimensions (all values must be positive)." << endl;
        return -1;
    }
    return length * width * height;
}

int main() {
    float length, width, height;
    
    cout << "Enter length of cuboid: ";
    cin >> length;
    cout << "Enter width of cuboid: ";
    cin >> width;
    cout << "Enter height of cuboid: ";
    cin >> height;
    
    float volume = calcVolume(length, width, height);
    if (volume != -1) {
        cout << "Volume of cuboid: " << volume << " cubic units" << endl;
    }
    
    return 0;
}
