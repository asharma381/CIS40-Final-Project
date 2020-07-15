//
//  Monthly.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Monthly_h
#define Monthly_h

#include "Appointment.h"
#include <string>

class Monthly : public Appointment
{
private:
    int day;
    
public:
    Monthly() : Appointment() { }
    
    Monthly(string des, int d, Time s, Time e) : Appointment(des, s, e)
    {
        day = d;
    }
    
    bool occurs_on(int, int, int) override;
    string save() override;
    string getClassName() override;
    int getDay() { return day;}
    void load(string) override;
};

#endif /* Monthly_h */
