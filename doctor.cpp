//https://www.linkedin.com/in/mousa123/

#include "doctor.h"
#include<iostream>
using namespace std;

Doctor::Doctor() {}
Doctor::Doctor(int i, string n, int dur, float r) : id(i), name(n), durationInMin(dur), rate(r) {}

float Doctor::calculateTotalFee(int, float)
{
    return durationInMin * rate;  // Return the calculated fee directly
}


string Doctor::PrettyPrint() 
{
    return "Doctor ID is D" + std::to_string(id) + " and name is Dr." + name + "\n";
}
