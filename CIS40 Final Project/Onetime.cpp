//
//  Onetime.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include "Onetime.h"

bool Onetime::occurs_on(int m, int d, int y)
{
    return date == Date(m, d, y);
}
