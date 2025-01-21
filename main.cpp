/*
Skeleton code for storage management
*/

#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes.h"
using namespace std;

int main(int argc, char* argv[]) {
    // Initialize the Storage Manager Class with the Binary .dat file name we want to create
    StorageManager manager("EmployeeRelation.dat");

    // Assuming the Employee.CSV file is in the same directory, 
    // we want to read from the Employee.csv and write into the new data_file
    manager.createFromFile("Employee.csv");


     int id;
     do {
        cout<<"Please enter the employee id, enter -1 to exit ";
        cin>>id;
        if(id == -1) {
            return 0;
        }
        manager.findAndPrintEmployee(id);
     }while(id!=-1);

    return 0;
}