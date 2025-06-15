//https://www.linkedin.com/in/mousa123/
#pragma 
#include<iostream>
#include "doctor.h"
#include "surgerySchedule.h"
#include <string>


using namespace std;



class Surgeon : public Doctor
{
private:
    int  numSurgeriesScheduled;
    surgerySchedule* SurgerySchedules;

public:
    //_______Constructors&Destructor____//
    Surgeon();//--->Default constructor

    Surgeon(int i, string n, int dur, float r, int num);//->constructor takes id,name,duration,rate,and num of surgeries scheduled

    void setSurgery(int ,string, string);
    // void printSurgery(int);

    Surgeon(const Surgeon& obj1);//----->Copy Constructor


    ~Surgeon();//----->Destructor

    //___________Functions_____________//

    float calculateTotalFee(int, float);

    string PrettyPrint();

    string printSurgeries() const;

};