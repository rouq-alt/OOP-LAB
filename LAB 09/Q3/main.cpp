#include <iostream>
#include <LectureCourse.h>
#include <LabCourse.h>

int main() {
    Course* c1 = new LectureCourse("MT101", 3);
    Course* c2 = new LabCourse("CS101L", 1);
    c1->displayInfo();
    cout<<"Grade:" << c1->calculateGrade();
    c2->displayInfo();
    cout<<"Grade:"<<c2->calculateGrade();
    delete c1;
    delete c2;
    return 0;
}
