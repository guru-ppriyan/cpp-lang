#include<iostream>
using namespace std ;

class Shapes {
     private :
     float length;
     float width;

     public :

    //  Default constructor
     Shapes() {
        cout<<"Default constructor"<<endl ;
     }
    //Parameterized Constructor
     Shapes(float l,float w){
        length = l;
        width = w;
        cout<<"Parameterized Constructor result : "<<length+width<<endl;
     }
    //  Copy Constructor
    Shapes(Shapes &u){
       length = u.length;
       width = u.width;
       cout<<"Area of Rectangular : "<<length*width<<endl;
    }

};

int main() {
    // default constructor
    Shapes s ;
    // parameterized constructor
    Shapes u(12.5,11.6);
    // copy consrtuctor
    Shapes g(u);
}