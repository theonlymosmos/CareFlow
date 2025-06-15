//https://www.linkedin.com/in/mousa123/
#pragma once

#include<iostream>
#include"doctor.h"
#include <string>
//specialist .h
using namespace std;

class Specialist : public Doctor
{

private:
    string speciality;
public:
    //___________Constructors__________//

    Specialist();

    Specialist(int i, string n, int dur, float r, string s);//-->constructor taking speciality as arguemnet

    //___________Functions_____________//

    float calculateTotalFee(int, float);

    string PrettyPrint();

};