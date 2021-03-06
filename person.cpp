// Gregory Miller
// Section 2
#include "person.h"

Person::Person(string fName, string lName, float rate, float hours)
  : firstName(fName), lastName(lName), payRate(rate), hoursWorked(hours)
    {}

string Person::getFirstName() {
    return firstName;
}
string Person::getLastName() {
    return lastName;
}
float Person::getPayRate() {
    return payRate;
}
float Person::getHoursWorked() {
    return hoursWorked;
}
void Person::setFirstName(string fname) {
    firstName = fname;
}
void Person::setLastName(string lname) {
    lastName = lname;
}
void Person::setPayRate(float rate) {
    payRate = rate;
}
void Person::setHoursWorked(float hours) {
    hoursWorked = hours;
}
string Person::fullName() {
    return firstName + " " + lastName;
}
float Person::totalPay() {
    return payRate * hoursWorked;
}
