#include "date.h"
#include <iostream>
using namespace std;

date::date(){
    d=0;
    m=0;
    y=0;
}

void date::getdate(){
    cout<<"Enter date in d m y format with spaces:";
    cin>>d>>m>>y;
}

void date::displaydate(){
        cout<<d<<"/"<<m<<"/"<<y;
}


