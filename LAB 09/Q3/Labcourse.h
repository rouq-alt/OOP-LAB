#ifndef LECTURECOURSE
#define LECTURECOURSE
#include <Course.h>

class LectureCourse : public Course {
public:
    LectureCourse(string code, int credits);
    void calculateGrade() override;
    void displayInfo() override;
};

#endif
