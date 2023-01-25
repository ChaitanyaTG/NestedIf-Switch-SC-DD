//
//  ToFindGreatestOf3Numbers.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter 3 numbers ";
    cin>>a>>b>>c;
    if (a > b && a > c) {
        cout<<a<<" is the greater number."<<endl;
    }
    else {
        if (b > c) {
            cout<<b<<" is the greater number."<<endl;
        }
        else {
            cout<<c<<" is the greater number."<<endl;
        }
    }
    return 0;
}
