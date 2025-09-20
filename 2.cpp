// 2. Write a program to calculate circumference of a circle.
#include<iostream>
using namespace std;
int calcCircumference(int r){
    if(r <= 0){
        cout << r << " is not a valid value.";
        return -1;
    }
    else{
        return 2*3.14*r;
    }
}
int main(){
    int radius;
    cout << "Enter the value of R(Radius) :";
    cin >> radius;

    float result = calcCircumference(radius);
    cout << "Circumference is : " << result;

    return 0;
}