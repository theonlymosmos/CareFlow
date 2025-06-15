//https://www.linkedin.com/in/mousa123/

#include<iostream>
#include"surgerySchedule.h"
//surgerySchedule
using namespace std;
surgerySchedule::surgerySchedule()
{
}
//surgerySchedule.cpp
surgerySchedule::surgerySchedule(string name, string date) :patientName(name), Date(date) {};


string surgerySchedule::getpatientName()
{
    return patientName;
}

string surgerySchedule::getDate()
{
    return Date;
}

void surgerySchedule::setpatientName(string name)
{
    patientName = name;
}

void surgerySchedule::setDate(string dte)
{
    Date = dte;
}