// Multilevel inheritance is when a class is derived from another derived class, forming a chain of inheritance.

// This creates a grandparent → parent → child relationship.
#include <iostream>

using namespace std;

// Single Inheritance 

// parent class / base class/ super class
class GrandFather{
    private:
    public:
    void land(){
        cout<<"Grand Father's Land  Accessable"<<endl;
    }
    
};
// child class/derived class/ sub class
class Father : public GrandFather{
    private:
    public:
    void house(){
        cout<<"Father 's House Accessable"<<endl;
    }
    
};

// child class/derived class/ sub class
class Son : public Father{
    public:
           void mobile(){
            cout<<"Own Mobile Access"<<endl;
           }
};

int main(){

    Son s1;
    s1.mobile();
    s1.house();
    s1.land();

    return 0;
}