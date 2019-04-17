// Gregory Miller
// Section 2
#include "person.cpp"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

void readData(vector<Person> &personVec);
void writeData(vector<Person> &personVec);

int main() {

    vector<Person> personVec;
    readData(personVec);
    writeData(personVec);
    return 0;
}

void readData(vector<Person> &personVec) {
   ifstream indata;
   indata.open("input.txt");
   string firstname;
   string lastname;
   float rates;
   float hour;
   if(!indata){
     cout << "File not found" << endl;
   }
   else {
     while(indata >> firstname >> lastname >> rates >> hour) {
         personVec.emplace_back(firstname, lastname, rates, hour);
      }
   }
   indata.close();
}

void writeData(vector<Person> &personVec) {
  ofstream outdata;
  outdata.open("output.txt");
  for(int i = 0; i < personVec.size(); i++) {
    outdata << personVec[i].fullName() << " " << fixed << setprecision(2) << personVec[i].totalPay() << endl;
  }
  outdata.close();
}
