#include <iostream>

using namespace std;

enum applicants
{
    candidate,
    faculty,
    evaluators
};
enum courses
{
    fullstack,
    machinelearning,
    datacience,
    frontend,
    backend
};

class programmingInstitute 
{
private:
    string name;
    int age;
    string spassword;
    string tpassword;

public:
    int score;
    int applicationFees;

    // programmingInstitute(string n, int a)
    // {
    //     name = n;
    //     age = a;
    //     cout << "Welcome to Aphrodite Institutions" << endl;
    // }

    

    void FetchApplicationFees()
    {
        cout << "Enter the name" << endl;
        int applicationFees;
        cout << "Please pay application Fees Rs.288" << endl;
        cin >> applicationFees;
        if(applicationFees != 288 ){
            throw runtime_error("Pay Exact amount");
        }
    }

    void DisplayEligibility()
    {
        cout<<"Enter the age: "<<endl;
        cin >> age;
        if(age < 0){
            throw (401);
        }else{

            if (age < 17)
            {
                cout << "Not Eligible for Enteranceexam & counselling " << endl;
            }
            else if (age >= 17)
            {
                cout << "you are eligible for Enteranceexam & counselling " << endl;
            }
        }
    }
};
class Course: public programmingInstitute
{
private:
    static int registrationNumber;
    string fullstack_ML="Full Stack and Machine Learning : 30000";
    string FE_DS_BE ="FrontEnd / Data Science / BackEnd  : 25000";
    string T_P ="Testing(java Selenium) / Product Support  : 15000";

public:
    Course(){

    }
    void Rank()
    {
        if (score >= 95)
        {
            cout << "full stack /machine learning is eligible" << endl;
        }
        if (score == 80 - 94)
        {
            cout << "frontend coures /data /backend courses/science eligible" << endl;
        }
        if (score == 60 - 79)
        {
            cout << "word&excel , java selenium is eligible" << endl;
        }
        else if (score < 60)
        {
            cout << "Marks are not eligible" << endl;
        }
    }
    
};


int main(){

    programmingInstitute *p1 = new Course;

    string student;
    // cout<<"Enter the student Name:"<<endl;
    // cin>>student;
    
    p1->DisplayEligibility();
    p1->FetchApplicationFees();

    return 0;
}