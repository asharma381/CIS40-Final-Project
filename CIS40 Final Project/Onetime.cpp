//
//  Onetime.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Onetime.h"

bool Onetime::occurs_on(int m, int d, int y)
{
    return date == Date(m, d, y);
}

string Onetime::getClassName()
{
    return "Onetime";
}

Date Onetime::getDate()
{
    return date;
}

string Onetime::save()
{
    return getClassName() + " " + getDescription() + " # " + to_string(getStartTime().getHour()) + " " + to_string(getStartTime().getMinute()) + " " + to_string(getStartTime().getSecond()) + " " + to_string(getEndTime().getHour()) + " " + to_string(getEndTime().getMinute()) + " " + to_string(getEndTime().getSecond()) + " " + to_string(getDate().getMonth()) + " " + to_string(getDate().getDay()) + " " + to_string(getDate().getYear());
}

