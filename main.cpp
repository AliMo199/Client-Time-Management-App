#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include "date.h"
#include "timeh.h"
#include "timesheet.h"
#include "project.h"
#include "client.h"
using namespace std;

int main()
{
    int c=-1,s=0,n5,n6=0,n7,z=0;
    client *c1,*c2;
    string key1,key2;
    c1=new client[1];
    c1[0].c_name="";
    c1[0].p1=new project[1];
    c1[0].p1[0].p_name="";
    char ch3;
    do{
        cout<<"\n\n\t\t\t\t CLIENT TIME MANAGMENT APP.\n";
        cout<<"\t\t\t\t----------------------------\n";
        cout<<"\t\t\t1.Add new clients.\n"
        <<"\t\t\t2.Add new projects.\n"
        <<"\t\t\t3.Add timesheet for a client on a project.\n"
        <<"\t\t\t4.Display time sheet for a client on a project.\n"
        <<"\t\t\t5.Display all clients.\n"
        <<"\t\t\t6.Display all projects.\n"
        <<"\t\t\t0.Quit app.\n";
        cout<<"\n\t\t\tService no.?:";
        cin>>c;
        switch(c){
        case 1:
            system("cls");
            cout<<"\nDo you want to make a new client list or add to the existing list(M||A)?:";
            cin>>ch3;
            if(ch3=='M'||ch3=='m'){
                cout<<"\nEnter number of clients you want to add:";
                cin>>s;
                c1=new client[s];
                for(int i=0;i<s;i++){
                    cout<<"\nClient "<<(i+1)<<":-\n\n";
                    c1[i].getinfo();
                }
                z=s;
                cout<<"\n\tDATA SAVED...";
                sleep(2);
                system("cls");
            }
            else{
                if(s==0){
                    cout<<"\n\tNo client list data stored make a new list then try again.\n";
                }
                else{
                    cout<<"\nEnter number of clients you want to add:";
                    cin>>n5;
                    z=n5+z;
                    c2=new client[z];
                    for(int i=0;i<s;i++){
                        c2[i]=c1[i];
                    }
                    delete[] c1;
                    for(int i=s;i<z;i++){
                        cout<<"\nClient "<<(i+1)<<":-\n\n";
                        c2[i].getinfo();
                    }
                    c1=new client[z];
                    for(int i=0;i<z;i++){
                        c1[i]=c2[i];
                    }
                    delete[] c2;
                    s=z;
                    cout<<"\n\tDATA SAVED...";
                    sleep(2);
                    system("cls");
                }
            }
            break;
        case 2:
            if(z!=0){
                system("cls");
                cout<<"\tSearch for Client you want to add a project to(by Name):-\n\n";
                cout<<"Enter client name:";
                cin.ignore();
                getline(cin,key1);
                for(int i=0;i<z;i++){
                    if(c1[i].c_name==key1){
                        system("cls");
                        cout<<"FOUND!\n\n";
                        cout<<"Enter number of projects you want to add:";
                        cin>>n6;
                        c1[i].addproj(n6);
                        cout<<"\n\tDATA SAVED...";
                        sleep(2);
                        system("cls");
                    }
                }
            }
            else{
                cout<<"\tADD DATA FIRST!\n";
            }
            break;
        case 3:
            if(z!=0){
                system("cls");
                cout<<"\tSEARCH(by name):-\n";
                cout<<"\nEnter client name: ";
                cin.ignore();
                getline(cin,key1);
                for(int i=0;i<z;i++){
                    if(c1[i].c_name==key1){
                        cout<<"\nEnter project name: ";
                        getline(cin,key2);
                        for(int i=0;i<z;i++){
                            for(int j=0;j<c1[i].n3;j++){
                                if(c1[i].p1[j].p_name==key2){
                                    system("cls");
                                    cout<<"FOUND!\n\n";
                                    cout<<"Enter number of Timesheets you want to add:";
                                    cin>>n7;
                                    for(int k=0;k<n7;k++){
                                        if(c1[i].p1[j].n1==0){
                                            c1[i].p1[j].t1=new timesheet[n7];
                                            for(int p=0;p<n7;p++){
                                                cout<<"\nTimesheet "<<p+1<<":-\n";
                                                c1[i].p1[j].t1[p].getstartend();
                                            }
                                            c1[i].p1[j].n1=n7;
                                        }
                                        else{
                                            c1[i].p1[j].addtimesh(n7);
                                        }
                                    }
                                    cout<<"\n\tDATA SAVED...";
                                    sleep(1);
                                    system("cls");
                                }
                            }
                        }
                    }
                }
            }
            else{
                cout<<"\tADD DATA FIRST!\n";
            }
            break;
        case 4:
            if(z!=0){
            system("cls");
            cout<<"\tSEARCH(by name):-\n";
            cout<<"\nEnter client name: ";
            cin.ignore();
            getline(cin,key1);
                for(int i=0;i<z;i++){
                    if(c1[i].c_name==key1){
                        cout<<"\nEnter project name: ";
                        getline(cin,key2);
                        for(int i=0;i<z;i++){
                            for(int j=0;j<c1[i].n3;j++){
                                if(c1[i].p1[j].p_name==key2){
                                    system("cls");
                                    cout<<"FOUND!\n\n";
                                    if(c1[i].p1[j].n1!=0){
                                        cout<<"Client name:"<<c1[i].c_name;
                                        cout<<"\nProject name:"<<c1[i].p1[j].p_name;
                                        for(int k=0;k<(c1[i].p1[j].n1);k++){
                                            cout<<"\nTimesheet "<<k+1<<":-\n";
                                            c1[i].p1[j].t1[k].displaytimesh();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else{
                cout<<"\tADD DATA FIRST!\n";
            }
            break;
        case 5:
            system("cls");
            if(c1[0].c_name==""){
                cout<<"\nNO CLIENT DATA FOUND!\n";
                sleep(1);
                system("cls");
            }
            else{
                cout<<"\n\t||CLIENTS DATA||\n"<<endl;
                for(int i=0;i<z;i++){
                    cout<<"\nClient "<<(i+1)<<":-\n\n";
                    c1[i].displayc();
                    sleep(1);
                }
            }
            sleep(1);
            break;
        case 6:
            system("cls");
            if(c1[0].c_name!=""){
                if(c1[0].p1[0].p_name==""){
                    cout<<"\nNO PROJECT DATA FOUND!\n";
                    sleep(1);
                    system("cls");
                }
                else{
                    cout<<"\n\t||PROJECTS DATA||\n"<<endl;
                    for(int i=0;i<z;i++){
                        for(int j=0;j<c1[i].n3;j++){
                            cout<<"\nProject "<<(j+1)<<":-\n";
                            cout<<"Client name: "<<c1[i].c_name;
                            c1[i].p1[j].displayp();
                            sleep(1);
                        }
                    }
                }
            }
            else{
                cout<<"\n\tNo client||Project data found!\n";
            }
            break;
        case 0:
            break;
        default:
            cout<<"No such service!";
            break;
        }
    }while(c!=0);
    system("cls");
    cout<<"\nThank you!\n";
}
