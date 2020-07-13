//
//  Date.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Date_h
#define Date_h

#include <iostream>
using namespace std;

class Date
{
private:
    int month;  // Member variable to hold month
    int day;    // Member varibale to hold day
    int year;   // Member varibale to hold year
    
public:
    // Constructor
    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    
    // Accessor Member Functions
    int getMonth() { return month; }
    int getDay() { return day; }
    int getYear() { return year; }
    
    // Equals Function
    bool equals(Date);
    
    // Print Function
    void print();
};

#endif /* Date_h */
