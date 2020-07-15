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

void Appointment::read(){
    int sh;
    int sm;
    int ss;
    int eh;
    int em;
    int es;

    cout << "Enter start_hours start_mins start_second end_hours end_mins end_second descript:"

          << endl;

    cin >> sh >> sm >> ss >> eh >> em >> es;

    getline(cin, description);

    start = Time(sh, sm, ss);

    end = Time(eh, em, es);
}
