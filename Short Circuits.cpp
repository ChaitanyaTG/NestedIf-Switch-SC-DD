//
//  Short Circuits.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, i = 5;
    if (a>b && ++i<=5) {
        
    }
    cout<<i<<endl;
    return 0;
}
// in an AND operation, if one condition is true then the second condition must be true if not the 'i++' will not executed.

#include<iostream>
using namespace std;

int main() {
    int a = 4, b = 5, i = 5;
    if (a>b && ++i<=5){
        
    }
    cout<<i<<endl;
    return 0;
}

// in the above operation, 4 is not greater thann 5 so ++i will not be executed and the value of i remains 5
