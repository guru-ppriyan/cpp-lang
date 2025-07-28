#include<iostream>
using namespace std;

class Employee{

    private:
        int specialId;
        int assets;

    public:
        string name;
        string role;
        int    empId;

        Employee(){
            name= "";
            role ="";
            empId =0;
            cout<<"default constructor called"<<endl;
        }
        ~Employee(){
            cout<<"Default destructor called"<<endl;
        }
        
        void getDetails(int s,int a){
            specialId =s;
            assets = a;
        }
        void displayEmployeeDetails(){
            cout<<"Name : "<<name<<endl;
            cout<<"Role : "<<role<<endl;
            cout<<"Employee Id : "<<empId<<endl;
            cout<<"Employee Id : "<<specialId<<endl;
            cout<<"Assets : "<<assets<<endl;
        }

};
// class ended

// creating the function 

int main(){
    Employee e1;
    e1.name="Guru";
    e1.role="Developer";
    e1.empId=10050;
    e1.getDetails(201,1000000);
    e1.displayEmployeeDetails();
    Employee e2;
    return 0;

}