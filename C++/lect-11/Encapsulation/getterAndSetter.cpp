#include <iostream>
using namespace std;

class Base
{
private:
    string name;
    int age;
public:
    Base(string name,int age):name(name),age(age){
        cout<<"Constructor called\n"<<"name : "<<name<<"\nage : "<<age<<endl;
    }   
    string getName(){
       return  this->name;
    }
    string setName(string n){
              this->name =n;
    }
};


int main(){

    Base b1("guru",17);
    // How to access private value use getter and setter
    // string name = b1.getName();
    // cout<<"Get the Name "<<name<<endl;
    b1.setName("priyan");
    string name = b1.getName();
    cout<<"Get the Name "<<name<<endl;


    return 0;
}
