// 5. Write a program to ask user about the cost price and selling price banana per dozen. 
// Calculate the profit or loss earned upon selling 25 bananas.
#include<iostream>
using namespace std;

int main() {
    float costPricePerDozen, sellingPricePerDozen;
    
    cout << "Enter cost price per dozen: ";
    cin >> costPricePerDozen;
    cout << "Enter selling price per dozen: ";
    cin >> sellingPricePerDozen;
    
    // Calculate cost and selling price for 25 bananas
    float costPriceFor25 = (costPricePerDozen / 12) * 25;
    float sellingPriceFor25 = (sellingPricePerDozen / 12) * 25;
    
    float profitOrLoss = sellingPriceFor25 - costPriceFor25;
    
    cout << "\nFor 25 bananas:" << endl;
    cout << "Cost price: " << costPriceFor25 << endl;
    cout << "Selling price: " << sellingPriceFor25 << endl;
    
    if (profitOrLoss > 0) {
        cout << "Profit: " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss: " << abs(profitOrLoss) << endl;
    } else {
        cout << "No profit, no loss" << endl;
    }
    
    return 0;
}
