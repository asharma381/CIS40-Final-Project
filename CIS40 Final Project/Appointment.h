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
private:
    string description;    // Member variable holds the description
    Time *start;
    Time *end;
public:
    // Default Constructor
    Appointment(){
        Appointment("", Time(0,0,0), Time(0,0,0));
    }
    
    // Constructor
    Appointment(string des, Time s, Time e){
        description = des;
        Time st(s.getHour(), s.getMinute(), s.getSecond());
        start = &st;
        
        Time en(e.getHour(), e.getMinute(), e.getSecond());
        end = &en;
    }
    
    // Print Member Function
    void print();
    
    // Virtual Function
    virtual bool occurs_on(int, int, int);
};


#endif /* Appointment_h */
