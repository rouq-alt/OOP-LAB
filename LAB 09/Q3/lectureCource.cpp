#include <iostream>
#include "LectureCourse.h"

LectureCourse::LectureCourse(string code, int creds) : Course(code, creds) {}

float LectureCourse::calculateGrade() {
    return 78.0;
  
}

void LectureCourse::displayInfo() {
    cout << "Lecture Course - Code: " << courseCode << ", Credits: " << credits << endl;
}
