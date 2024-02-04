#ifndef TIMESHEET_H
#define TIMESHEET_H
#include <iostream>
#include "timeh.h"


class timesheet{
private:
    timeh endtime;
public:
    timeh starttime;
    timesheet();
    void getstartend();
    void duration();
    void displaytimesh();
};

#endif // TIMESHEET_H
