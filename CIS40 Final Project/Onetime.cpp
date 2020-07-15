//
//  Onetime.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "Onetime.h"

bool Onetime::occurs_on(int m, int d, int y)
{
    return date == Date(m, d, y);
}

string Onetime::getClassName()
{
    return "Onetime";
}

Date Onetime::getDate()
{
    return date;
}

string Onetime::save()
{
    return getClassName() + " " + getDescription() + " # " + to_string(getStartTime().getHour()) + " " + to_string(getStartTime().getMinute()) + " " + to_string(getStartTime().getSecond()) + " " + to_string(getEndTime().getHour()) + " " + to_string(getEndTime().getMinute()) + " " + to_string(getEndTime().getSecond()) + " " + to_string(getDate().getMonth()) + " " + to_string(getDate().getDay()) + " " + to_string(getDate().getYear());
}

void Onetime::load(string data)
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
    
    // Date Month
    stringstream dateMonth(rest.substr(0,rest.find(" ")));
    int dm = 0;
    dateMonth >> dm;
    rest = rest.substr(rest.find(" ") + 1);
    
    // Date Day
    stringstream dateDay(rest.substr(0,rest.find(" ")));
    int dd = 0;
    dateDay >> dd;
    rest = rest.substr(rest.find(" ") + 1);
    
    // Date Year
    stringstream dateYear(rest.substr(0,rest.find(" ")));
    int dy = 0;
    dateYear >> dy;
    
    start = Time(sh, sm, ss);
    end = Time(eh, em, es);
    date = Date(dm, dd, dy);
}

void Onetime::read()
{
    /// READ DATA
}
