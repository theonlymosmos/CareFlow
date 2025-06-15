//https://www.linkedin.com/in/mousa123/

#include<iostream>
#include<fstream>
#include <string>
#include "doctor.h"
#include "surgerySchedule.h"
#include "Surgeon.h"
#include"Specialist.h"

using namespace std;

int main()
{
    int numm,choice,id,numSurgeriesScheduled,durationInMin;
    float totalfee,rate;
    string name, speciality,patientname,patientdate;

    fstream outfile("doctors.txt",ios::out);

    cout << "Enter the number of doctors: " << endl;
    cin >> numm;
    Doctor** arr = new Doctor*[numm];

    for (int i = 0;i < numm;i++)
    {
        cout << "Is the doctor a surgeon[1] or specialist[2]?\n>";
        cin >> choice;

        if (choice == 1)//-------->Doctor [i] is a surgeon
        {
            cout << "Please enter the following in order: ID, Name, Duration(In Minutes), Rate, Number of Scheduled surgeries: " << endl;
            cin >> id >> name >> durationInMin >> rate >> numSurgeriesScheduled;
             Surgeon* surgeon = new Surgeon(id, name, durationInMin, rate, numSurgeriesScheduled);
             arr[i] = surgeon; // Store the surgeon in the array 
            for (int i = 0;i < numSurgeriesScheduled;i++) 
            {
                cout << "Enter Patient's name and surgery date\n> ";
                cin >> patientname >> patientdate; 
                surgeon->setSurgery(i, patientname, patientdate);
                       
            }
        }

        else if (choice == 2)//------>Doctor [i] is a specialist
        {
            cout << "Please enter the following in order: ID, Name, Duration(In Minutes), Rate, Speciality: " << endl;
            cin >> id >> name >> durationInMin >> rate >> speciality;
            arr[i] = new Specialist(id, name, durationInMin, rate, speciality);

            
        }

        else//---------->User enters choice outside 1 or 2
        {
            cout << "Enter valid choice.\n";
            i--;
        }
        
    }


    for (int j = 0; j < numm; j++)
    {
        if (arr[j])
        {
            cout << arr[j]->PrettyPrint();

             // Write the PrettyPrint output to the file
            outfile << "Doctor Details:\n";
            outfile << arr[j]->PrettyPrint();

            Surgeon* surgeon = dynamic_cast<Surgeon*> (arr[j]);

            if (surgeon)
            {
                cout << surgeon->printSurgeries();
                outfile << surgeon->printSurgeries(); // Print surgeries to the file
                
            }
        }
    }

    
   
     for (int i = 0 ; i < numm ; i++)
     {
         delete arr[i];
     }
         delete []arr;

    outfile.close();
    return 0;
}