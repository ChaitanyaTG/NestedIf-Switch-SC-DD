//
//  FindNatureOfQuadraticRoots.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float a, b, c, d, r1, r2;
    cout<<"Enter a, b, c, d ";
    cin>>a>>b>>c;
    d = b * b - 4*a*c;
    if (d == 0) {
        r1 = -b/(2*a);
        cout<<"The roots are real and equal "<<endl<<(-b/(2*a));
    }
    else {
        if (d > 0) {
            r1 =(-b + sqrt(d))/(2*a);
            r2 = (-b - sqrt(d))/(2*a);
            cout<<"The roots are real and unequal "<<r1<<" "<<r2<<endl;
        }
        else {
            cout<<"The roots are imaginary "<<endl;
        }
    }
    return 0;
}
