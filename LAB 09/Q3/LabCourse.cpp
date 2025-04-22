#include <iostream>
#include <LabCourse.h>

LabCourse::LabCourse(string code, int credits) : Course(code, credits) {}
float LabCourse::calculateGrade() {
  return 89.0;
}
void LabCourse::displayInfo() {
    cout << "Lab Course --: " << courseCode << ", Credits: " << credits << endl;
}
