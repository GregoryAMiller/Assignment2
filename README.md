# Assignment2

CPSC301 - Assignment 2

Description: A program is needed to calculate employee salaries for a small company. Employee information is retrieved from a text file and used to calculate an employee’s wage for the week. The results are then stored in a second text file.
  
1. Create the following “input.txt” file. Each record consists of a firstName, lastName, hours worked, and pay rate:
 
Maria Brown 60.0 38.25
Jeffrey Jackson 45.0 32.25
Bernard Smith 30.0 18.0
Matthew Davenport 20.0 15.5
Kimberly Macias 32.5 21.5
Amber Daniels 22.25 16.75

2. Each record will be saved in an instance of a CLASS called Person. The person class will be defined as follows (HINT: this should go in a file called person.h):

//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person();
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};
#endif // end person.h


3. You will need to make a separate file called person.cpp. The file person.cpp contains proper definitions for all function declarations in the header file. The first line of the file is an include statement:

#include "person.h"

Here is an example of a function definition in person.cpp:

string Person::getFirstName() {
    return firstName;
}

Note the <ret type> Classname::funcName() structure here. The “::” is referred to as a scope resolution operator. It lets the compiler know that this code is defining a function for the class Person, and not a bare function that can be used anywhere. It also lets the compiler know that the variables reference in the function can be found within that class. This is required, because they are private otherwise.


4. Make a new file called pay.cpp that includes your main() function,  #include "person.cpp" (plus any other necessary includes), and all of the following requirements.

5. An array that is sized to hold up to 20 employees (employees will be of the Person class). The company employs at most 20 employees at any given time therefore we can be certain the file will never contain more than 20 records. NOTE: Only arrays can be used in this assignment.

6. A function readData is needed in main() to read the data from “input.txt” and store it in the employees array. NOTE: the array and its size need to be passed to the function and the file should be read only once in the program.

7. The function writeData is needed in main() to write the results to “output.txt”. NOTE: the array and its size need to be passed to the function.

The function should use the fullName() and totalPay() functions from the Person class to write to the file.

Example of “output.txt” should be formatted to match the following:

Maria Brown 2295.00
Jeffrey Jackson 1451.25
Bernard Smith 540.00
Matthew Davenport 310.00
Kimberly Macias 698.75
Amber Daniels 372.69

Additional Notes:
No global variables are allowed.
Do not change function/class/array/file names or function declarations.
You may only call myFile.open one time in the program to read the file.
No use of dynamic allocation for this assignment.
Must use arrays.
