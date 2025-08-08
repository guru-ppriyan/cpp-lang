#include<iostream>
using namespace std;


/*
Account creation 
Deposit 
withdraw
balance
*/

class College{

    private :
    string name;
    string spassword;
    string tpassword;
    
    int id;
    string address;
    
    public:
    float balance;
    College(){
        balance = 100000;
        spassword ="s@124";
        tpassword ="t@124*$";
    }
    // account creation
    void getDetails(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the A/c:"<<endl;
        cin>>id;
        cout<<"Enter the Address:"<<endl;
        cin>>address;
    }
    void displayDetails(){
        cout<<"\n Customer Name :"<<name;
        cout<<"\n Customer Id No :"<<id;
        cout<<"\n Customer Type :"<<address;
    }
    void DisplayBalance(){
        cout<<"\n Balance : "<<balance;
     }
    string getStdPassword(){
        return this->spassword;
    }
    string getTeachPassword(){
        return this->tpassword;
    }

};

class management : public College {
    
    public:
     
     void feesCollector(){
        float deposit;
        cout<<"Enter the Fees amount:"<<endl;
        cin>>deposit;
        balance = balance+deposit;
        cout<<"balance : "<<balance<<endl;

     }
     void salaryPayment(){
        float payment;
        cout<<"Enter the Deposit amount:"<<endl;
        cin>>payment;
        balance = balance-payment;
        cout<<"balance : "<<balance<<endl;

        if(balance > 1000){
            balance = balance - payment;
            cout<<"current balance after withdraw : "<< balance;
        }else{
            cout<<"\n Insufficient balance  : "<<balance;
        }
     }
     void departmentCampaigns(){
        cout<<"Current Status : "<<"BCA Fare Well"<<endl;
     }
     void currentDisplay(){
        cout<<"\n Balance : "<<balance<<endl;
     }
};

int main(){
    
    management c1;
    int choice;
    string password;
    char type;
    cout<<"Enter the Student s or Teacher t or College c:"<<endl;
    cin>>type;
    cout<<"Enter the Password"<<endl;
    cin>>password;
    // type ="s"
    if(type =='t'||type =='T'){
        if(password == c1.getTeachPassword()){
        c1.getDetails();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Salary Payment"<<endl;
            cout<<"\n2. Program Status"<<endl;
            cout<<"\n4. Exist"<<endl;
            cout<<"\n Enter the value"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.salaryPayment();
                break;
                case 2:
                c1.departmentCampaigns();
                break;
                case 4:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
            }}else{
                cout<<"Invalid Login Credentials of teacher"<<endl;
            }
        
    }else if(type =='s'||type =='S'){
        // string teachPassword
        if(password == c1.getStdPassword()){
        c1.getDetails();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Fees Payment"<<endl;
            cout<<"\n2. Program Status"<<endl;
            cout<<"\n4. Exist"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.feesCollector();
                break;
                case 2:
                c1.departmentCampaigns();
                break;
                case 4:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }
        }else{
                cout<<"Invalid Login Credentials of student"<<endl;
            }
    }else if(type == 'c'){
        cout<<"current Status "<<endl;
        c1.departmentCampaigns();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Check balance"<<endl;
            cout<<"\n2. Exist"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.DisplayBalance();
                break;
                case 2:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }

    }else{
        cout<<"\n Invaild Account Selection"<<endl;
    }
    end:
    cout<<"\n Thank You for transaction with us"<<endl;
    
    return 0;

}