//https://www.linkedin.com/in/mousa123/

#include<iostream>
//surgeon.cpp
#include "Surgeon.h"
#include "doctor.h"

using namespace std;

Surgeon::Surgeon() {}
Surgeon::Surgeon(int i, string n, int dur, float r, int num) : Doctor(i, n, dur, r), numSurgeriesScheduled(num)
{
    SurgerySchedules = new surgerySchedule[numSurgeriesScheduled];
    
}

void Surgeon::setSurgery(int index, string patientName, string date) 
{
        SurgerySchedules[index].setpatientName(patientName);
        SurgerySchedules[index].setDate(date);

}

// void Surgeon::printSurgery(int i) 
// {
//         SurgerySchedules[i].getpatientName();
//         SurgerySchedules[i].getDate();

// }


Surgeon::Surgeon(const Surgeon& obj1) : Doctor(obj1), numSurgeriesScheduled(obj1.numSurgeriesScheduled)
{
    SurgerySchedules = new surgerySchedule[numSurgeriesScheduled];
    for (int i = 0; i < numSurgeriesScheduled; ++i)
    {
        SurgerySchedules[i] = obj1.SurgerySchedules[i];
    }
}

Surgeon :: ~Surgeon()
{
    delete[] SurgerySchedules;
}

float Surgeon::calculateTotalFee(int i, float r)
{
    return (durationInMin / 60.0) * rate;  // Return the calculated fee based on hours directly
}

string Surgeon::PrettyPrint() 
{
    return "Dr. " + name + " is a surgeon whose total fee is " +
           to_string(calculateTotalFee(durationInMin, rate)) + "\n" +
           "Number of Scheduled Surgeries is: " + to_string(numSurgeriesScheduled) + "\n";
}



string Surgeon::printSurgeries() const 
{
    string result = "Scheduled Surgeries for Dr." + name + ":\n";
    for (int i = 0; i < numSurgeriesScheduled; ++i) {
        result += "Surgery " + to_string(i + 1) + ": Patient: " +
                  SurgerySchedules[i].getpatientName() +
                  ", Date: " + SurgerySchedules[i].getDate() + "\n";
    }
    return result;
}

