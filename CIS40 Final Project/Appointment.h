//
//  Appointment.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Appointment_h
#define Appointment_h

#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

class Appointment
{
protected:
    string description;    // Member variable holds the description
    Time start;
    Time end;
public:
    // Default Constructor
    Appointment() : start(Time(0,0,0)), end(Time(0,0,0)){
        description = "";
    }
    
    // Constructor
    Appointment(string des, Time s, Time e) : start(s), end(e)
    {
        description = des;
    }
    
    // Print Member Function
    void print();
    
    // Virtual Function
    virtual bool occurs_on(int, int, int) = 0;
};


#endif /* Appointment_h */
