// 3. Write a program to calculate simple interest.
#include<iostream>
using namespace std;
float simpleInterestCalc(int p, float r, int t) {
    if (p <= 0 || r <= 0 || t <= 0) {
        cout << "Enter valid data." << endl;
        return -1;
    }
    else return ((p * r * t) / 100);
}
int main() {
    int p;
    float r;
    int t;

    cout << "Enter Principle :";
    cin >> p;
    cout << "Enter Annual Interest Rate :";
    cin >> r;
    cout << "Enter Duration (in years) :";
    cin >> t;

    float result = simpleInterestCalc(p, r, t);
    if (result != -1) cout << "Simple Interest : " << result << endl;

    return 0;
}