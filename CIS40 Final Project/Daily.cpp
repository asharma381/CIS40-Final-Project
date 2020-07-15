//
//  Daily.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Daily.h"

//************************************************************
// Override occurs_on Function: Returns true since each day  *
// there is an appointment.                                  *
//************************************************************
bool Daily::occurs_on (int m, int d, int y)
{
    return true;
}

string Daily::getClassName()
{
    return "Daily";
}

string Daily::save()
{
    return getClassName() + " " + getDescription() + " # " + to_string(getStartTime().getHour()) + " " + to_string(getStartTime().getMinute()) + " " + to_string(getStartTime().getSecond()) + " " + to_string(getEndTime().getHour()) + " " + to_string(getEndTime().getMinute()) + " " + to_string(getEndTime().getSecond());
}

// WEEKLY: ADD DAY
// MONTHLY: ADD DAY
// ONETIME: ADD DATE

    // Daily DES HR MIN SEC HR MIN SEC
