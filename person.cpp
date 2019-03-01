#include "person.h"

Person::Person() {
    firstName = "";
    lastName = "";
    payRate = 0;
    hoursWorked = 0;
}
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
string Person::fullName() {
    return firstName + " " + lastName;
}
float Person::totalPay() {
    return payRate * hoursWorked;
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
