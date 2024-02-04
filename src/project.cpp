#include "project.h"
#include <iostream>
using namespace std;

project::project()
{
    n1=0;
    n2=0;
}

void project::getproject(){
        cout<<"Enter project name: ";
        cin.ignore();
        getline(cin,p_name);
        cout<<"Enter project description: ";
        getline(cin,p_description);
        cout<<"Deadline date:-\n";
        p_deadline.getdate();
        cout<<"---------------------------------------------\n";
        cout<<"Do you want to add a Timesheet to this project?(Y||N):";
        cin>>ch1;
        if(ch1=='y'||ch1=='y'){
            cout<<"Enter number of Timesheets you want to add:";
            cin>>n1;
            t1=new timesheet[n1];
            for(int i=0;i<n1;i++){
                cout<<"\nTimesheet "<<i+1<<":-\n";
                t1[i].getstartend();
            }
        }
        else{
            t1=new timesheet[1];
        }
}

void project::addtimesh(int n){
        z=n1+n;
        t2=new timesheet[z];
        for(int i=0;i<n1;i++){
            t2[i]=t1[i];
        }
        delete[] t1;
        for(int i=n1;i<z;i++){
            cout<<"\nTimesheet "<<i+1<<":-\n";
            t2[i].getstartend();
        }
        t1=new timesheet[z];
        for(int i=0;i<z;i++){
            t1[i]=t2[i];
        }
        n1=z;
        delete[] t2;
}

void project::displayp(){
        cout<<"\nProject name: "<<p_name;
        cout<<"\nProject description: "<<p_description;
        cout<<"\nDeadline: ";
        p_deadline.displaydate();
        cout<<"\n---------------------------";
}


