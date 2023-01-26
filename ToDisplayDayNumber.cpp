//
//  ToDisplayDayNumber.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 24/01/23.
//


#include<iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter day number ";
    cin>>day;
    if (day == 1) {
        cout<<"The day is Monday!";
    }
    else {
        if (day == 2) {
            cout<<"The day is Tuesday!"<<endl;
        }
        else {
            if(day == 3) {
                cout<<"The day is Wednesday!"<<endl;
            }
            else {
                if (day == 4) {
                    cout<<"The day is Thursday!"<<endl;
                }
                else {
                    if (day == 5) {
                        cout<<"The day is Friday!"<<endl;
                    }
                    else {
                        if (day == 6) {
                            cout<<"The day is Saturday!"<<endl;
                        }
                        else {
                            if (day == 7) {
                                cout<<"The day is Sunday!"<<endl;
                            }
                            else {
                                cout<<"Invalid number."<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
