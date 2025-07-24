#include<iostream>
using namespace std;

class ArithmaticOperations
{
private:
    /* data */
public:
    //Attributes (members) 
    int a;
    int b;
    int sum;
    

    //Methods(members function )
    // method mention inside the class
    void add(){
        sum = a+b ;
        cout << sum << endl ;   
    }
    // method specifies in other of the class
    void sub() ;
};

 void ArithmaticOperations::sub () {
    sum  = a-b  ; 
    cout<<sum<< endl ;
 } 

int main(){
   ArithmaticOperations sum1 ;
   sum1.a=77;
   sum1.b=12;
   sum1.add ();
   sum1.sub() ;
}