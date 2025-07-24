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
    // how to use Poiter object;

    car *car1 = new car();// we have to use "new" keyword
    //we cannot use dot notation instead we have to use this "->"
    car1->name = "TATA";
    car1->year =2022;
    car1->disPlayCarDetails();
    
    // car1.name = //normal object store in stack memory but this is static memory
    
}