#include <iostream>

using namespace std;

// Single Inheritance 

// parent class / base class/ super class
class GrandFather{
    private:
    public:
    void land(){
        cout<<"Grand Father's Land Accessable"<<endl;
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
// parent class / base class/ super class

class GrandMother{
    private:
    public:
        void gold(){
            cout<<"GrandMa's gold Accessable"<<endl;
        }

};
class Mother :public GrandMother{
    private:
    public:
        void foods(){
            cout<<"Mother's foods Accessable"<<endl;
        }

};
// child class/derived class/ sub class
class Son : public Father, public Mother{
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
    s1.foods();
    s1.gold();

    return 0;
}