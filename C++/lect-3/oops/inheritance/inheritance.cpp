#include <iostream>

using namespace std;

class Animal{
     private:
     public:
     void eat(){
        cout<<"Aminal eat"<<endl;
     }

};

class Dog : public Animal{
    public:
        string name;

           void sounds(){
            cout<<name<<": Dog Barks"<<endl;
           }
};
class Cat : public Animal{
    public:
        string name;

           void sounds(){
            cout<<name<<": Cat meow"<<endl;
           }
};

int main(){
    Dog dog;
    Cat cat;
    cat.name = "sweety";
    dog.name ="jimmy";





    cat.sounds();
    dog.sounds();
    cat.eat();

}