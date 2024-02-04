#include "timesheet.h"
#include <iostream>
using namespace std;

timesheet::timesheet(){
}

void timesheet::getstartend(){
    cout<<"Start time:-\n";
    starttime.gettime();
    cout<<"End time:-\n";
    endtime.gettime();
    cout<<"-----------------------------------------\n";
}

void timesheet::duration(){
        int s1,s2;
        if((starttime.ap=="am"&&endtime.ap=="pm")||(starttime.ap=="pm"&&endtime.ap=="am")){
            if(starttime.m<endtime.m){
                s1=(12-starttime.h)+endtime.h;
                s2=endtime.m-starttime.m;
            }
            else{
                s1=11;
                s2=(60-starttime.m)+endtime.m;
            }
            cout<<s1<<" hours and "<<s2<<" minutes.";
        }
        else if(starttime.ap=="am"&&endtime.ap=="am"){
            s1=endtime.h-starttime.h;
            s2=endtime.m-starttime.m;
            s2=abs(s2);
            cout<<s1<<" hours and "<<s2<<" minutes.";
        }
        else if(starttime.ap=="pm"&&endtime.ap=="pm"){
            s1=endtime.h-starttime.h;
            s2=endtime.m-starttime.m;
            s2=abs(s2);
            cout<<s1<<" hours and "<<s2<<" minutes.";
        }
        else{
            cout<<"\nInvalid time.";
        }
}

void timesheet::displaytimesh(){
    cout<<"\nStart time:";
    starttime.showtime();
    cout<<"\nEnd time:";
    endtime.showtime();
    cout<<"\nDuration:";
    duration();
    cout<<"\n-----------------------------------------\n";
}
