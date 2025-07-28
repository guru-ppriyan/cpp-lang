#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum gender {Male,Female};
enum status {
    pending = 1,
    success =2,
    waring= 3,
    deleted = 0
};


int main() {
    Day today = Wednesday;

    if (today == Friday) {
        cout << "Weekend is near!" << endl;
        cout << "Numeric value of specific: " << __TIME__ << endl;  // Outputs: 5
    }
    cout << "Time : " << __TIMESTAMP__  << endl;  // Outputs: 5

    gender g  = Female;

    switch(g){
        case Male :
        cout<<"Gender Male "<<Male;
        break;
        case Female :
        cout<<"Gender Female "<<Female;
        break;
        default:cout<<"Invalid";
        break;
    }
    
    status statusmessge = success;

     switch(statusmessge){
        case success :
        cout<<"\nSuccess: "<<success;
        break;
        case waring :
        cout<<"\nWaring: "<<waring;
        case pending :
        cout<<"\nPending: "<<pending;
        case deleted :
        cout<<"\nDeleted: "<<deleted;
        break;
        default:cout<<"Invalid";
        break;
    }




    return 0;
}

