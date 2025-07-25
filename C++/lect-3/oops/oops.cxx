#include <iostream>
using namespace std;

// Class definition

class Car {
private:
    int speed;
    string fuel;

public:
    // void setSpeed(int s) {
    //     speed = s;
    // }
    void getValue(string f, int s) {
        fuel = f;
        speed =s ;
    }

    void showValue() {
        cout << "Speed is: " << speed << " km/h" << endl;
        cout<< "fuel ="<< fuel<<endl ;
    }
};


int main() {
    Car myCar;           // Object creation

    myCar.getValue("petrol",90) ;
    myCar.showValue() ;
    // myCar.setSpeed(80); ;  // Call method
    // myCar.showSpeed();   // Output: Speed is: 80 km/h
    
    return 0;
}