//
//  ToCalculateTheDiscountedAmount.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int amount = 0;
    float disAmount;
    cout<<"Enter your bill amount ";
    cin>>amount;
    if (amount > 5000) {
        disAmount = amount - amount*20/100.0;
        cout<<"Your Discounted Bill amount after applying 20% discount is"<<disAmount<<endl;
    }
    else {
        if (amount >= 2000 && amount < 5000) {
            disAmount = amount - amount*10/100.0;
            cout<<"Your Discounted Bill amount after applying 10% discount is "<<disAmount<<endl;
        }
        else {
            disAmount = amount - amount*5/100.0;
            cout<<"Your Discounted Bill amount after applying 5% discount is "<<disAmount<<endl;
        }
    }
    return 0;
}
