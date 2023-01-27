//
//  ToCheckAverageMarksOfaStudent.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//

#include <stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int m1, m2, m3, m4, m5, Total;
    float avg;
    cout<<"Enter marks of 5 subjects ";
    cin>>m1>>m2>>m3>>m4>>m5;
    Total = m1 + m2 + m3 + m4 + m5;
    avg = Total/5.0;
    if (avg > 80) {
        cout<<"You scored exceptional marks "<<avg<<endl;
    }
    else {
        if (avg > 75 && avg <= 80) {
            cout<<"You scored distinction marks"<<avg<<endl;
        }
        if (avg == 35 && avg <= 70 ) {
            cout<<"You scored "<<avg<<" you can do better"<<endl;
        }
        else {
            cout<<"You failed "<<avg<<endl;
        }
    }
    return 0;
}
