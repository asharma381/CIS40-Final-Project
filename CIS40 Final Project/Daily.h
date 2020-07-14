//
//  Daily.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Daily_h
#define Daily_h
#include "Appointment.h"
#include "Time.h"

class Daily: public Appointment
{
public:
    // Default Constructor
    Daily() : Appointment(){
        
    }
    
    // Constructor
    Daily(string des, Time s, Time e): Appointment(des, s, e){
        
    }
    
    bool occurs_on(int, int, int) override;

};

#endif /* Daily_h */
