//
//  main.cpp
//  CIS40 Final Project
//
//  Created by Aditya Sharma on 7/13/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include<cstdio>

#include "Date.h"
#include "Time.h"
#include "Appointment.h"
#include "Daily.h"
#include "Weekly.h"
#include "Monthly.h"
#include "Onetime.h"

using namespace std;
const int SIZE = 3;

int main() {
    
//    Time t1(10,0,0);
//    Time t2(10,5,0);
//
//    Appointment b("a", t1, t2);
//    b.print();
    vector<Appointment*> list(SIZE);
    
    list[0] = new Onetime("see the dentist", Date(7, 14, 2020),
                          Time(11, 30, 0), Time(12, 30, 0));
    list[1] = new Monthly("clean the house", 4 , Time(14, 0, 0), Time(16, 0, 0));
    list[2] = new Daily("brush my teeth", Time(8, 0, 0), Time(8, 5, 0));
    
    int year, month, day;
    cout << "Enter a date (month, day, year): ";
    cin >> month >> day >> year;
    
//    cout << list[0]->occurs_on(month, day, year);
    for (int i = 0; i < list.size(); i++) {
        if(list[i]->occurs_on(month, day, year))
            list[i]->print();
    }
    
    int num;
    cout << "Enter 0) Exit" << endl << "1) Save Data to a file?" << endl << "2) Load Data from a file" << endl;
    cin >> num;
    
    if(num == 1){
        // SAVE DATA TO FILE
        ofstream file;
        file.open("data.txt");
        
        // DAILY

        for(int i = 0; i < list.size(); i++)
        {
            file << list[i]->getClassName() << " "
                 << list[i]->getDescription() << " # "
                 << list[i]->getStartTime().getHour() << " "
                 << list[i]->getStartTime().getMinute() << " "
                 << list[i]->getStartTime().getSecond() << " "
                 << list[i]->getEndTime().getHour() << " "
                 << list[i]->getEndTime().getMinute() << " "
                 << list[i]->getEndTime().getSecond();
            if(list[i]->getClassName() == "Weekly")
            {
                file << " " << (static_cast<Weekly*>(list[i]))->getDay() << endl;
            }else if(list[i]->getClassName() == "Monthly")
            {
                file << " " << (static_cast<Monthly*>(list[i]))->getDay() << endl;
            }else if(list[i]->getClassName() == "Onetime")
            {
                file << " " << (static_cast<Onetime*>(list[i]))->getDate().getMonth()
                << " " << (static_cast<Onetime*>(list[i]))->getDate().getDay()
                << " " << (static_cast<Onetime*>(list[i]))->getDate().getYear() << endl;
            }else
            {
                file << endl;
            }
        }
        file.close();
        
        // WEEKLY: ADD DAY
        // MONTHLY: ADD DAY
        // ONETIME: ADD DATE
        
            // Daily DES HR MIN SEC HR MIN SEC
        
    }
    else if(num == 2){
        /// Load Data
    }
    return 0;
}
