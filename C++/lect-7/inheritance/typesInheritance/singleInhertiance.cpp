#include <iostream>

using namespace std;

// Single Inheritance 

// parent class / base class/ super class
class Father{
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

    return 0;
}