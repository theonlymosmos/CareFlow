//https://www.linkedin.com/in/mousa123/

#pragma once

#include<iostream>
#include <string>
using namespace std;

//surgerySchedule.h
class surgerySchedule
{
private:
    string patientName;
    string Date;

public:
    //___________Constructors__________//

    surgerySchedule();

    surgerySchedule(string name, string date);

    //___________Setters  _____________//

    void setpatientName(string name);

    void setDate(string dte);

    //___________Getters  _____________//

    string getpatientName();

    string getDate();

};