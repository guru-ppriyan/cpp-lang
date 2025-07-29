#include <iostream>

using namespace std;
// parent class
class Father{
    private:
    public:
    void father(){
        cout<<"From English"<<endl;
    }
    
};

// parent class
class Mother : public Father{
    public:
           void mother(){
            cout<<"From Maths"<<endl;
           }
};
class Son : public Mother{
    public:
           void sonDisplay(){
            cout<<"Knowledge"<<endl;
           }
};

int main(){

    Son s1;
    s1.sonDisplay();
    s1.father();

    return 0;
}