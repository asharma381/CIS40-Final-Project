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
    start.print();
    cout << " to ";
    end.print();
    cout << " - " << description << endl;
}

string Appointment::getClassName(){
    return "Appointment";
}
