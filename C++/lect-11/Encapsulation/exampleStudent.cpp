#include<iostream>

using namespace std ;

class AdmiSsion  {

    private :
    string studentName ;
    float averageMarks ;

    public:
    AdmiSsion (string s , float a) {
         studentName=s ;
         averageMarks=a;
        cout<<"constructor called"<<endl;

    
    }
      float getDetails () {
            return  this-> averageMarks ;
            
        
    }
    string setDetails (string s) {
        
        this ->studentName=s ; 
        
        return this -> studentName ;
    }
    
};

int main() {
    AdmiSsion g ("sam", 76.6);
     
    string studentName=g.setDetails("ram");
    
    
    cout<<"displayName"<<studentName<<endl;
    
    return 0;
}