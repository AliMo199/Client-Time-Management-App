#include "client.h"
using namespace std;

client::client()
{
    v=0;
    n3=0;
}

void client::getinfo(){
        cout<<"Enter client name: ";
        cin.ignore();
        getline(cin,c_name);
        cout<<"Enter client Phone: ";
        getline(cin,c_phone);
        cout<<"Enter client email: ";
        getline(cin,c_email);
        cout<<"Enter date of addition:-\n";
        added_d.getdate();
        cout<<"---------------------------------------------\n";
        cout<<"Do you want to add a project to this client?(Y||N):";
        cin>>ch2;
        if(ch2=='y'||ch2=='y'){
            cout<<"\nEnter number of projects you want to add:";
            cin>>n3;
            p1=new project[n3];
            for(int i=0;i<n3;i++){
                cout<<"\nProject "<<(i+1)<<":-\n\n";
                p1[i].getproject();
            }
        }
        else{
            p1=new project[1];
        }
    }

void client::addproj(int n){
        v=n3+n;
        p2=new project[v];
        for(int i=0;i<n3;i++){
            p2[i]=p1[i];
        }
        delete[] p1;
        for(int i=n3;(i<v);i++){
            cout<<"\nProject "<<i+1<<":-\n";
            p2[i].getproject();
        }
        p1=new project[v];
        for(int i=0;i<v;i++){
            p1[i]=p2[i];
        }
        n3=v;
        delete[] p2;
    }

void client::displayc(){
        cout<<"Client Name:"<<c_name;
        cout<<"\nClient Phone:"<<c_phone;
        cout<<"\nClient Email:"<<c_email;
        cout<<"\nAdded on:";
        added_d.displaydate();
        cout<<"\n------------------------------";
    }
