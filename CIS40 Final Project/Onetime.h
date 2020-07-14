//
//  Onetime.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Onetime_h
#define Onetime_h

#include "Appointment.h"
#include "Time.h"
#include "Date.h"
#include <string>

class Onetime: public Appointment
{
private:
    Date date;
    
public:
    Onetime(string des, Time s, Time e, Date d) : Appointment(des, s, e), date(d) {}
    
    bool occurs_on(int, int, int) override;
};

#endif /* Onetime_h */
