//
//  ToCheckIfaYearIsLeapYearOrNot.cpp
//  Conditional Statements
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
        if (year % 400 == 0)
            cout << year << " is a leap year.";
        else
            cout << year << " is not a leap year.";
        }
    else
        cout << year << " is a leap year.";
    }
    else
         cout << year << " is not a leap year.";

    return 0;
        
}

// Using OR Operation
#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      cout<<year<<" is a leap year."<<endl;
  }
  else {
    cout<< year<<" is not a leap year."<<endl;
  }

  return 0;
}
