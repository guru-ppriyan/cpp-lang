#include <iostream>
 using namespace std;
// parent class
 class Base {
 protected:              // Protected member
     int protectedVar;

 public:
     Base() : protectedVar(100) {
        cout<<"constructor called"<<endl;
     }
 };
// child class
 class Derived : public Base {
 public:
     void show() {
         cout << "Accessing protectedVar from derived class: " 
              << protectedVar << endl;  // Allowed
     }
 };

 int main() {
     Derived d;
     d.show();

     // cout << d.protectedVar;  Error: cannot access protected member outside
     return 0;
 }
