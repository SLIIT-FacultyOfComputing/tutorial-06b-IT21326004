#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int sid,char name) {
  studentId = sid;
  name = name;
}

// Display StudentId and Name
Student::display() {
  cout<<"Student ID: "<<studentId<<endl;
  cout<<"Name: "<<name<<endl;
}
