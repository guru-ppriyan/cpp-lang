#include <iostream>
using namespace std;

class Math
{
protected:
     const float pie;
public:
    int a;
    int b;
    float x;
    float y;
    string operationType;

 Math() : pie(3.14){
    a = 0;
    b= 0;
    x =0.0;
    y =0.0;
    operationType ="";
    cout<<"constructor called : pie value = "<<pie<<endl;
 }
//  function overriding
 virtual void displayContent(){
        cout<<"Depcit Math Calcuation : "<<endl;
    }
    
        // functiion overLoading
        
        void  add(int s, int d){
            a = s;
            b = d;
            // return a +b;
            cout<<"result of INT value = "<<a +b<<endl;
        }
        
        void add(double n, double m){
            x =n;
            y =m;
            cout<<"result of double value = "<<x +y<<endl;
            // return x + y;
        }
    };
    
class Shapes : public Math{
        
        private:
        float length;
        float width;
        float radius;
        
        public:
        void displayContent() override {
            cout<<"Draw the Shapes : "<<endl;
            cout<<"you have to mention the Shapes name propurly(eg: Rectangle/Triangle/Circle) : "<<endl;
            
        }
        // function OverLoading
        void areaOfShapes(string shape,float l,float w){
            length = l;
            width = w;
            if(shape == "rectangle" ||shape == "Rectangle"){

                cout<<"Area of the "<<shape<<" result = "<<l*w<<endl;
            }else if(shape == "triangle" ||shape == "Triangle"){
                cout<<"Area of the "<<shape<<" result = "<<0.50*l*w<<endl;
            }else{
                cout<<"Area of the "<<shape<<" Invalid shape name"<<endl;
            }
        }
        void areaOfShapes(string shape,float r){
            radius = r;
            cout<<"Area of the "<<shape<<" result = "<<pie * radius *radius<<endl;
        }
        
 };

int main()
{
    // parent class
    Math* m1;
    // child class
    Shapes p1;
    m1 = &p1;

    // function overriding
    m1->displayContent();
    
    // function overloading
    p1.areaOfShapes("circle",3.5);
    p1.areaOfShapes("triangle",3.5,2.9);

    // function overloading
    m1->add(5,10);
    m1->add(2.5,4.2);
  
    
    return 0;
}