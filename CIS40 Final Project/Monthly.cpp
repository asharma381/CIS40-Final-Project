//
//  Monthly.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <sstream>
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

string Monthly::save()
{
    return getClassName() + " " + getDescription() + " # " + to_string(getStartTime().getHour()) + " " + to_string(getStartTime().getMinute()) + " " + to_string(getStartTime().getSecond()) + " " + to_string(getEndTime().getHour()) + " " + to_string(getEndTime().getMinute()) + " " + to_string(getEndTime().getSecond()) + " " + to_string(getDay());
}

void Monthly::load(string data)
{
    string des = data.substr(0,data.find("#"));
    description = des; // init the description
    
    string rest = data.substr(data.find("#") + 2);
    
    // Start Hour
    stringstream startHr(rest.substr(0,rest.find(" ")));
    int sh = 0;
    startHr >> sh;
    rest = rest.substr(rest.find(" ") + 1);
    
    // Start Minute
    stringstream startMin(rest.substr(0,rest.find(" ")));
    int sm = 0;
    startMin >> sm;
    rest = rest.substr(rest.find(" ") + 1);

    // Start Second
    stringstream startSec(rest.substr(0,rest.find(" ")));
    int ss = 0;
    startSec >> ss;
    rest = rest.substr(rest.find(" ") + 1);
    
    
    // End Hour
    stringstream endHr(rest.substr(0,rest.find(" ")));
    int eh = 0;
    endHr >> eh;
    rest = rest.substr(rest.find(" ") + 1);
    
    // End Minute
    stringstream endMin(rest.substr(0,rest.find(" ")));
    int em = 0;
    endMin >> em;
    rest = rest.substr(rest.find(" ") + 1);
    
    // End Second
    stringstream endSec(rest.substr(0,rest.find(" ")));
    int es = 0;
    endSec >> es;
    rest = rest.substr(rest.find(" ") + 1);
    
    // DAY
    stringstream d(rest.substr(0,rest.find(" ")));
    int da = 0;
    d >> da;
    
    //cout << sh << " " << sm << " " << ss << " " << eh << " " << em << " " << es << " ";
    start = Time(sh, sm, ss);
    end = Time(eh, em, es);
    day = da;
}

void Monthly::read()
{
    /// READ DATA
    Appointment::read();
    cout << "Enter day: ";
    int d;
    cin >> d;
    day = d;
}
