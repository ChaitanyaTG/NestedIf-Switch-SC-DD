//
//  SwitchCaseProgramUsingMenuOptions.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

#include <iostream>
using namespace std;

int main() {
    cout<<"Menu\n";
    cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n";
    int option;
    cout<<"Enter your Choice of Operation ";
    cin>>option;
    
    int a, b, c;
    cout<<"Enter Two Numbers ";
    cin>>a>>b;
    switch(option) {
        case 1: c=a+b;
            cout<<"Result is "<<c<<endl;
            break;
        case 2: c=a-b;
            cout<<"Result is "<<c<<endl;
            break;
        case 3: c=a*b;
            cout<<"Result is "<<c<<endl;
            break;
        case 4: c=a/b;
            cout<<"Result is "<<c<<endl;
            break;
    }
    return 0;
}

