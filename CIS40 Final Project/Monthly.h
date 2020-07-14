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
    
    Monthly(string des, Time s, Time e, int d) : Appointment(des, s, e)
    {
        day = d;
    }
    
    bool occurs_on(int, int, int) override;
};

#endif /* Monthly_h */
