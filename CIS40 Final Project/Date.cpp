//
//  Date.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//
#include <iostream>
#include "Date.h"

//************************************************************
// Equals Function: Returns true if two dates are equal.     *
//************************************************************
bool Date::equals(Date d)
{
    return getMonth() == d.getMonth() &&
            getDay() == d.getDay() &&
            getYear() == d.getYear();
}

//************************************************************
// Print Function: Prints the date.                          *
//************************************************************
void Date::print()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
