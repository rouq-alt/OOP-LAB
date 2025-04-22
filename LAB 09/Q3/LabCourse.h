#ifndef LABCOURSE
#define LABCOURSE

#include <Course.h>
class LabCourse : public Course {
public:
    LabCourse(string code, int credits);
    void calculateGrade() override;
    void displayInfo() override;
};
#endif
