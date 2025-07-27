#include<iostream>

using namespace std ;

class Employee{
     private :
      string role ;
      int salary ;

     public:
      string name ;
      int employeeid ;

      // default constructor
      Employee(){
        // inital values assignd
            employeeid=0;
            name="";
            cout<<"default constructor called"<<endl;
      }

     void DisplayEmployee() {
          cout<<"name:"<<name<<endl;
          cout <<"id:"<< employeeid<<endl;
          cout <<"Role : "<< role<<endl;
          cout <<"Salary :"<< salary<<endl;
          
     }
     void GetEmployeeDetails (string r , int s) {
        role=r ;
        salary =s;
     }
     Employee(Employee &e,Employee &m){
        name =e.name;
        name = m.name;
        employeeid = m.employeeid;
        role = e.role;
        // cout<<"He is working good and performance also well in his "<<role<<"role"<<endl;
     }   
};


int main() {
    Employee E1 ;
    Employee E2 ;
    E1.name="Guru";
    E1.employeeid= 3234 ;
    E1.GetEmployeeDetails("HR",86000) ;
    E1.DisplayEmployee() ;
    
    E2.name = "Priyan";
    E2.employeeid =3231;
    Employee E3(E1,E2);
    E3.DisplayEmployee();
    

}