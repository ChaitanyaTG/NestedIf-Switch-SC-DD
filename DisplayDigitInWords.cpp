//
//  DisplayDigitInWords.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int digit;
    cout<<"Enter a Digit ";
    cin>>digit;
    if (digit == 1) {
        cout<<"The digit is One!"<<endl;
    }
    else if (digit == 2) {
        cout<<"The digit is Two!"<<endl;
    }
    else if (digit == 3) {
        cout<<"The digit is Three!"<<endl;
    }
    else if (digit == 4) {
        cout<<"The digit is Four!"<<endl;
    }
    else if (digit == 5) {
        cout<<"The digit is Five!"<<endl;
    }
    else if (digit == 6) {
        cout<<"The digit is Six!"<<endl;
    }
    else if (digit == 7) {
        cout<<"The digit is Seven!"<<endl;
    }
    else if (digit == 8) {
        cout<<"The digit is Eight!"<<endl;
    }
    else if (digit == 9) {
        cout<<"The digit is Nine!"<<endl;
    }
    else if (digit == 0) {
        cout<<"The digit is Zero!"<<endl;
    }
    else {
        cout<<"Not Supported."<<endl;
    }
    return 0;
}
