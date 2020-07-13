//
//  Time.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Time.h"

//************************************************************
// Equals Function: Returns true if two dates are equal.     *
//************************************************************
bool Time::equals(Time t)
{
    return getHour() == t.getHour() &&
            getMinute() == t.getMinute() &&
            getSecond() == t.getSecond();
}

//************************************************************
// Print Function: Prints the date.                          *
//************************************************************
void Time::print()
{
    cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}

