#include <iostream>
 using namespace std;

 class Animal {
 public:
     virtual void sound()  {   // virtual function
         cout << "Animal makes a sound" << endl;
     }
 };

 class Dog : public Animal {
 public:
     void sound()  {  // overriding
         cout << "Dog barks" << endl;
     }
 };
class snake : public Animal {
 public:
     void sound() override  {  // overriding
         cout << "Snake ssss" << endl;
     }
 };
 int main() {
     //  derived Class created
      Dog d;
      snake s1;
    // Base class
    //  Animal *a =NULL;
     Animal *a, *a1;

     a = &d;
     a1 = &s1;
     a->sound();  //  Output: Dog barks (not Animal)
     a1->sound();
 }