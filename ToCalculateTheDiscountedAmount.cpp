//
//  ToCalculateTheDiscountedAmount.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

#include<iostream>
using namespace std;

int main()
{
    float billAmount;
    float discount=0.0;

    cout<<"Enter Bill Amount:";
    cin>>billAmount;
        
    if(billAmount>=5000) {
        discount=billAmount*20/100;
    }
    
    else if(billAmount>=1000 && billAmount<5000) {
        discount=billAmount*10/100;
        billAmount=billAmount-discount;
    }
    cout<<"The Bill Amount is:"<<billAmount<<endl;
    cout<<"The Discount is :"<<discount<<endl;
    cout<<"The Discounted Amount is:"<<billAmount - discount<<endl;
        
    return 0;
        
}
