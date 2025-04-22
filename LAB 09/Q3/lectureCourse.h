#ifndef LECTURECOURSE
#define LECTURECOURSE
#include <Course.h>

class LectureCourse : public Course {
public:
    LectureCourse(string code, int credits);
    float calculateGrade() override;
    void displayInfo() override;
};

#endif
