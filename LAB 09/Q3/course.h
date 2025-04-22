#ifndef COURSE
#define COURSE

#include <string>
using namespace std;

class Course {
protected:
    string courseCode;
    int credits;

public:
    Course(string code, int credits) : courseCode(code), credits(credits) {}
    virtual float calculateGrade() = 0;
    virtual void displayInfo() = 0;
    virtual ~Course() {}
};
#endif
