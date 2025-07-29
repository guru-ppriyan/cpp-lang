
// Multiple inheritance is an OOP feature in which a derived (child) class inherits from more than one base (parent) class.

// This allows a class to combine features of multiple classes, promoting code reuse.

#include <iostream>

using namespace std;

// Multi[ple Inheritance 

// parent class / base class/ super class
class Father{
    private:
    public:
    void house(){
        cout<<"Father 's House Accessable"<<endl;
    }
    
};

// parent class / base class/ super class
class Mother{
    private:
    public:
        void foods(){
            cout<<"Mother's foods Accessable"<<endl;
        }
        void gold(){
            cout<<"Mother's gold Accessable"<<endl;
        }

};
// child class/derived class/ sub class
class Son : public Father,public Mother{
    public:
           void mobile(){
            cout<<"Own Mobile Access"<<endl;
           }
};

int main(){

    Son s1,s2;
    s1.mobile();
    s1.foods();
    s1.gold();
    s1.house();

    return 0;
}