//
//  Monthly.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Monthly.h"

//************************************************************
// Override occurs_on Function: Returns true if the day of   *
// the week is the same as appointment date.                 *
//************************************************************
bool Monthly::occurs_on (int m, int d, int y){
    return day == d;
    
}

string Monthly::getClassName()
{
    return "Monthly";
}

void Monthly::save(ofstream file)
{
    
}
