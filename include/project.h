#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include "date.h"
#include "timesheet.h"

class project{
private:
    std::string p_description;
    date p_deadline;
public:
    int n1,n2,z;
    char ch1;
    timesheet *t1,*t2;
    std::string p_name;
    project();
    void getproject();
    void addtimesh(int n);
    void displayp();
};


#endif // PROJECT_H
