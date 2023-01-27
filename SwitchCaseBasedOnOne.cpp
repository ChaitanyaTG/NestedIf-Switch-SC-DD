//
//  SwitchCaseBasedOnOne.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int x = 1;
    
    switch(x) {
        case 1:cout<<"One"<<endl;
            break;
        case 2:cout<<"Two"<<endl;
            break;
        case 3:cout<<"Three"<<endl;
            break;
        default:cout<<"Invalid Number"<<endl;
    }
    return 0;
}
