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
    Onetime() : date(0,0,0){}
    Onetime(string des, Date d, Time s, Time e) : Appointment(des, s, e), date(d) {}
    
    bool occurs_on(int, int, int) override;
    string getClassName() override;
    string save() override;
    Date getDate();
    void load(string) override;
    void read() override;
};

#endif /* Onetime_h */
