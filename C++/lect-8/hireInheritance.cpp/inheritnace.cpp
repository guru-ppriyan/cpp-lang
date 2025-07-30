#include<iostream>
using namespace std;

// parent/base/super class
class Shapes{

    private:

    public:
    void displayContent(){
        cout<<"Draw a Diagram \n"<<endl;
    }
};

// child/derived/sub class

class Circle : public Shapes {
    private:
       int radius;
       public:
       Circle(){
        radius = 12;
        cout<<"Constructor called"<<endl;
       }
       void areaOfCircle(){
        int result = 3.14 * radius * radius;
        cout<<"Area of Circle : "<< result<<endl;
       }
};


class Rectangular : public Shapes {
    private:
       float length;
       float width;
       public:
       Rectangular(){
        length= 46.7;
        width= 22.3;
        cout<<"Constructor called"<<endl;
       }
       void areaOfRectangualr(){
        float result = length* width;
        cout<<"Area of Rectangular : "<< result<<endl;
       }
};

class Triangle : public Shapes {
    private:
       float base;
       float height;
       public:
       Triangle(){
        base = 15.6;
        height = 20.4;
        cout<<"Constructor called"<<endl;
       }
       void areaOfTriangle(){
        float result = 0.50 * base * height;
        cout<<"Area of Triangle : "<< result<<endl;
       }
};

int main(){
    Circle c1;
    Rectangular r1;
    Triangle t1;

    c1.displayContent();
    c1.areaOfCircle();

    
    r1.displayContent();
    r1.areaOfRectangualr();

    
    t1.displayContent();
    t1.areaOfTriangle();

    return 0;
}