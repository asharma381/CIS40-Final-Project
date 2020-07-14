//
//  main.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Appointment.h"
#include "Time.h"

int main() {
    
    Time t1(10,0,0);
    Time t2(10,5,0);
    
    Appointment b("a", t1, t2);
    b.print();
    return 0;
}
