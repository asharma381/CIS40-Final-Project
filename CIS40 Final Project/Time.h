//
//  Time.h
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#ifndef Time_h
#define Time_h

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;       // Member variable to hold hours
    int minute;     // Member varibale to hold minutes
    int second;     // Member varibale to hold seconds
    
public:
    // Constructor
    Time(int hr, int min, int sec)
    {
        hour = hr;
        minute = min;
        second = sec;
    }

    // Accessor Member Functions
    int getHour() { return hour; }
    int getMinute() { return minute; }
    int getSecond() { return second; }

    // Equals Function
    bool equals(Time);

    // Print Function
    void print();
};
#endif /* Time_h */
