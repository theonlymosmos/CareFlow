//https://www.linkedin.com/in/mousa123/

//specialist.cpp
#include<iostream>
#include"Specialist.h"
#include "doctor.h"
using namespace std;

Specialist::Specialist() {}
Specialist::Specialist(int i, string n, int dur, float r, string s) : Doctor(i, n, dur, r), speciality(s) {} //->Parameterized constructor

float Specialist::calculateTotalFee(int i, float r)//----------->Calculates rate by every quarter hour
{
    
    return (durationInMin / 15.0) * rate;  // Return the calculated fee based on quarter hours directly
};

string Specialist::PrettyPrint() 
{
    return "Dr. " + name + " is a Specialist with " + speciality + 
           " whose total fee is " + std::to_string(calculateTotalFee(durationInMin, rate)) + "\n";
}