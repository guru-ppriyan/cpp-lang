#include<iostream>
using namespace std;

// How to view the program
    // department wise details sub class
    // balance
    // year wise fees
    // teachers salary
    // maintance 
    // library access
    // lab servies

// what details to create ?
// creating a college is Main class
// 1.Student details creation in college
// 2.Teachers details creation
// 



enum category  {student,teacher};
enum student  {BCA,Btech};

class college{

    private:
    string name;
    string type;
    string id;
    // int totalStudent;
    
    public:
    float balance; // college balance
    int studentBtech;
    int studentBCA;
    int tSalaryBCA;
    int tSalaryBtech;
     college(){
        studentBtech =  1080000;
        studentBCA = 200000;
        tSalaryBCA = 76800;
        tSalaryBtech = 200000;
     }
        void getDetails(string name,string type,string id){
            cout<<"Enter the details : "<<endl;
            name = name;
            type = type;
            id = id;
        }
        void displayDetails(){
            cout<<"college Details"<<endl;
            cout<<"Balance : "<<balance<<endl;
        }
};

class managementDetails : virtual public college{
        private:
        
        public:
            void feesCollector(string type){
                if(type == "BCA"){
                    balance = balance + studentBCA;
                }else if(type == "Btech"){
                    balance = balance + studentBtech;
                }else{
                    cout<<"Invalid department"<<endl;
                }

            }

            void salaryProvider(int salaryAmount,string dept){
                if(dept == "BCA"){
                    balance = balance - tSalaryBCA;
                }else if(dept == "Btech"){
                    balance = balance - tSalaryBtech;
                }else{
                    cout<<"Invalid department"<<endl;
                }
            }
            void collegeStatus(){
                cout<<"campaign for Btech"<<endl;
            }
};

class library : virtual public college{
    public :

    void getAccess(){
        cout<<"Book"<<endl;
    }
};


class lab : virtual public college{
    public :

    void getAccess(){
        cout<<"Computer"<<endl;
    }
};
class collegePerson:public managementDetails, public library,public lab {
private:
    /* data */
public:
     void join(){
        cout<<"Class Joined"<<endl;
     }

};


int main(){
    collegePerson p1;
    string type;
    type ="student";

    if(type == "s" || type == "S"){
        p1.getDetails("guru","student","std01");
        while(1){
            cout<<"Choose category"<<endl;
            cout<<"\t1.college Status"<<endl;
            cout<<"\t2.college fees"<<endl;
            cout<<"\t3.Logout"<<endl;
            cout<<"choose your choice"<<endl;
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                    p1.collegeStatus();
                    break;
                case 2:
                    cout<<"Enter your Department "<<endl;
                    p1.feesCollector("BCA");
                    break;
                case 3:
                goto;
            }
        }
    }else if(type == "t" || type == "T"){

    }else{
        cout<<"Invaild User"<<endl;
    }
    
    if(type == "BCA" || type == "bca"){}
        

    return 0;
}