//
//  ToCalculateTheGradeOfaStudent.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 23/01/23.
//


#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int m1 , m2, m3, m4, Total;
    float avg;
    cout<<"Enter marks of 4 subjects ";
    cin>>m1>>m2>>m3>>m4;
    Total = m1 + m2 + m3 + m4;
    avg = Total/4;
    if (avg >= 60) {
        cout<<"The Grade is A "<<endl;
    }
    else {
        if (avg >= 35 && avg < 60) {
            cout<<"The Grade is B "<<endl;
        }
        else {
            cout<<"The Grade is C "<<endl;
        }
    }
    return 0;
}
