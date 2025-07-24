#include<iostream>
using namespace std;

class car
{
private:
    /* data */
public:
    //Attributes (members) 
    string name;
    int year;

    //Methods(members function )
    void disPlayCarDetails(){
        cout<<"car Name ="<<name<<endl;
        cout<<"car Year ="<<year<<endl;
    }
};

int main(){
    car car1;
    car1.name ="Tata";
    car1.year =2022;
    car1.disPlayCarDetails();

}