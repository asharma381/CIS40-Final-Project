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
bool Appointment::occurs_on(int month, int day, int year)
{
    return true;
}
