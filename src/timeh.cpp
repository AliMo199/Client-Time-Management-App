#include "timeh.h"
#include<iostream>
using namespace std;

timeh::timeh()
{
    h=0;
    m=0;
}

void timeh::gettime(){
    do{
    cout<<"Enter time in |hour minute (am||pm)| format with spaces:";
    cin>>h>>m>>ap;
    }while(h>12&&m>59&&(ap!="am"||ap!="pm"));
}

void timeh::showtime(){
        if(m<10){
            cout<<h<<":0"<<m<<" "<<ap;
        }
        else{
        cout<<h<<":"<<m<<" "<<ap;
        }
    }
