//
//  ShortCircuitsOnORstatements.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 5, i = 5;
    if (a<b || ++i<=5) {
        
    }
    cout<<i<<endl;
    return 0;
}
// in the above OR operation, one condition must be true and 5 is not greater than 10 so the first condition is false and so on the next condition where i is incremented to 6.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, i = 5;
    if (a > b || ++i <= 5) {
        
    }
    cout<<i<<endl;
    return 0;
}
// in this operation, 10 is greater than 5 so the first condition is true so ++i doesn't happen so the value of i remains 5
