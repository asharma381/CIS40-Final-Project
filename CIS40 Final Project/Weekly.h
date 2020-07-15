//
//  Weekly.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Weekly_h
#define Weekly_h

#include "Appointment.h"
#include "Time.h"

class Weekly: public Appointment
{
private:
    int day;
public:
    // Default Constructor
    Weekly() : Appointment()
    {
        day = 0;
    }
    
    // Constructor
    Weekly(string des, Time s, Time e, int d): Appointment(des, s, e)
    {
        day = d;
    }
    
    bool occurs_on(int, int, int) override;
    void save(ofstream file) override;
    string getClassName() override;
    int getDay() {return day;}
};

#endif /* Weekly_h */
