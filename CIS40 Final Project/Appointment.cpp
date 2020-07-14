//
//  Appointment.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Appointment.h"

//************************************************************
// Print Function: Prints the appointment.                   *
//************************************************************
void Appointment::print()
{
    cout << "Appointment from ";
    start->print();
    cout << " to ";
    end->print();
    cout << endl;
}
