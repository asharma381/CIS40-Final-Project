//
//  Daily.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Daily.h"

//************************************************************
// Override occurs_on Function: Returns true since each day  *
// there is an appointment.                                  *
//************************************************************
bool Daily::occurs_on (int m, int d, int y)
{
    return true;
}

string Daily::getClassName()
{
    return "Daily";
}

void Daily::save(ofstream file)
{
    
}
