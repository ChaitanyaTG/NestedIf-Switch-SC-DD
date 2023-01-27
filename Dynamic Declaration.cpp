//
//  Dynamic Declaration.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    if (true) {
        int c = a+b;
        cout<<c<<endl;
    }
    return 0;
}
// In dynamic Declaration, if you declare a variable inside a block it will be only be declared until the block ends. Once it ends, it vanishes from the memory. So when i try to execute c outside the if condition, it won't because c is only declare inside if statement

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    {
        int c = a+b;
        if c > 10 {
            cout<<c<<endl;
        }
    }
    return 0;
}
// Method no. 1 for declaring c only inside a block is by creating dummy block.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    if (c=a+b; c > 10) {
        cout<<c<<endl;
    }
    return 0;
}
// Method no 1 is to include c condition inside a if block before declaring it so that its confined to the if condition. this is an c++ 17 extension
