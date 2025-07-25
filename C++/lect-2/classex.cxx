#include<iostream>
using namespace std ;

class studentName {

    public :
     string name ;
     int id  ;
     float averageMarks ;

     void disPlaystudentName () {

        cout<<"studentname"<<name<<endl ;
        cout<<"joiningid"<<id<<endl;
        cout<<"studentaveragemarks"<<averageMarks<<endl;
     } 
     void collegeDetails();
    } ;

    void studentName::collegeDetails(){

    }

    int main() {
        studentName s1 ;
        s1.name="guru" ;
        s1.id=10 ;
        s1.averageMarks=86.4 ;
        s1.disPlaystudentName() ;

    }
