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
    cout << "Enter " << endl << "0) Add an Appointment" << endl << "1) Save Data to a file." << endl << "2) Load Data from a file." << endl << "3) EXIT";
    cin >> num;
    
    if(num == 0){
        string type = "";
        cout << "Enter the type of appointment (Daily, Weekly, Monthly, Onetime): ";
        cin >> type;
        
        if(type == "Daily"){
            Daily *d = new Daily();
            list.push_back(d);
            d->read();
        }
        
    }
    if(num == 1){
        // SAVE DATA TO FILE
        ofstream file;
        file.open("data.txt");
        
        // Polymorphic Behavior Established
        for(int i = 0; i < list.size(); i++)
        {
            string data = list[i]->save();
            file << data << endl;
        }
        file.close();
        
    }
    else if(num == 2){
        // Load Data
        fstream file;
        file.open("data.txt", ios::in);
        if(!file){
            cout << "Error Loading File" << endl;
            return 0;
        }
        while(file.peek() != EOF)
        {
            string currLine;
    //        file >> line;
            getline(file, currLine);
//            cout << currLine << endl;
            string className = currLine.substr(0, currLine.find(" "));
            string data = currLine.substr(currLine.find(" ") + 1);
                if(className == "Daily"){
                    Daily *d = new Daily();
                    list.push_back(d);
                    d->load(data);
                    d->print();
                }
                else if(className == "Weekly"){
                    Weekly *w = new Weekly();
                    list.push_back(w);
                    w->load(data);
                    w->print();
                }
                else if(className == "Monthly"){
                    Monthly *m = new Monthly();
                    list.push_back(m);
                    m->load(data);
                    m->print();
                }
                else if(className == "Onetime"){
                    Onetime *o = new Onetime();
                    list.push_back(o);
                    o->load(data);
                    o->print();
                }
        }
        file.close();
    }
    return 0;
}
