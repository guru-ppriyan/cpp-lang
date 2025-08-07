#include <iostream>
using namespace std;

class Employee {
public:
    static int count;  // Declaration
    string statusMsg;

    Employee() {
        // count++;
    // setStatusMsg("Today B.E/B.tech Farewell");
    }
    int getCountvalue(){
        return count;
    }
    void setStatusMsg(string msg){
        this->statusMsg = msg;
        count =0;
    }
    void DisplayDetails() {
        count++;
        cout << "College Fare well: " << statusMsg<< endl;

    }
    void showDisplayCount(){
        cout << "View the StatusMsg: " << count << endl;
    }
};


// Definition outside the class
int Employee::count = 0;

int main() {
    Employee e1 ,e2,e3,e4 ;
    e1.DisplayDetails();
    e4.DisplayDetails();
    e4.DisplayDetails();
    e4.DisplayDetails();
    e3.DisplayDetails(); 
    // check data
    e2.showDisplayCount();
    return 0;
}
