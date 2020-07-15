//
//  Weekly.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Weekly.h"

enum Week
{
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

//************************************************************
// Override occurs_on Function: Returns true if the day of   *
// the week is the same as appointment date.                 *
//************************************************************
bool Weekly::occurs_on (int m, int d, int y){
    return day == d;
}

string Weekly::getClassName(){
    return "Weekly";
}

string Weekly::save()
{
    return getClassName() + " " + getDescription() + " # " + to_string(getStartTime().getHour()) + " " + to_string(getStartTime().getMinute()) + " " + to_string(getStartTime().getSecond()) + " " + to_string(getEndTime().getHour()) + " " + to_string(getEndTime().getMinute()) + " " + to_string(getEndTime().getSecond()) + " " + to_string(getDay());

}
