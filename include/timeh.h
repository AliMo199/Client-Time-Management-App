#ifndef TIMEH_H
#define TIMEH_H
#include <iostream>

struct timeh{
    unsigned int h,m;
    std::string ap;
    timeh();
    void gettime();
    void showtime();
};

#endif // TIMEH_H
