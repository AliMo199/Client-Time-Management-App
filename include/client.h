#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "date.h"
#include "project.h"

class client{
private:
    int n4;
    std::string c_phone,c_email;
    date added_d;
public:
    int v=0,n3=0;
    char ch2;
    project *p1,*p2;
    std::string c_name;
    client();
    void getinfo();
    void addproj(int n);
    void displayc();
};

#endif // CLIENT_H
