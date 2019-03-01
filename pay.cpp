#include "person.cpp"
#include <fstream>
#include <iostream>
#include <iomanip>

int readData(Person P[], int);
void writeData(Person P[], int);

int main() {

    int size = 20; 
    Person P[size]; // Array of type Person
    int realSize = readData(P, size) - 1; // we want how many people are actually in the file 
    writeData(P, realSize);
    return 0;
}
// reads data from input.txt and fills our Person Array
int readData(Person P[], int size) {
   ifstream indata;
   indata.open("input.txt");
   int i = 0;
   string firstname;
   string lastname;
   float rates;
   float hour;
   if(!indata){
     cout << "File not found" << endl;
   }
   else {
     while(!indata.eof()) {
       if(i >= 20) {
         cout << "Cannot hold any more employees make the array dynamic" << endl;
         exit(0);
       }
         indata >> firstname >> lastname >> rates >> hour;
         P[i].setFirstName(firstname);
         P[i].setLastName(lastname);
         P[i].setPayRate(rates);
         P[i].setHoursWorked(hour);
         i++;
      }
   }
   indata.close();
   return i;
}

void writeData(Person P[], int realSize) {
  ofstream outdata;
  outdata.open("output.txt");
  for(int i = 0; i < realSize; i++) {
    outdata << P[i].fullName() << " " << fixed << setprecision(2) << P[i].totalPay() << endl;
  }
  outdata.close();
}
