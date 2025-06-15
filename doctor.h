//https://www.linkedin.com/in/mousa123/

#include<iostream>
#include <string>

#pragma once

using namespace std;
class Doctor
{
protected:
    int id = 0;
    string name;
    int durationInMin=0;
    float rate=0;

public:
    //___________Constructors__________//

    Doctor();

    Doctor(int i, string n, int dur, float r);//->Parameterized constructor takes id,name,duration,and rate

    //___________Functions_____________//

    virtual float calculateTotalFee(int, float);

    virtual string PrettyPrint();

};