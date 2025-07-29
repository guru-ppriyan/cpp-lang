#include<iostream>

using namespace std ;

class DynamicArray{
    private :
    int size ;
    int  *arr ;

    public :

    DynamicArray(int s){
        size=s ;
        arr = new int[size]; 
        cout<<"constructor called"<<size<<endl;

    }
    void InsertValue(int j,int value) {
      if (j>=0 && size>j ) {
        arr[j]=value;

      } else {
        cout<<"more than index range"<<endl;
      }        
   }
   void Display() {
     for(int j=0;j<size;j++) {
        cout<<arr[j]<<" ";
     }
     cout<<endl;
   }
   ~DynamicArray(){
    delete[] arr;
    cout<<"memoryErased"<<endl;
   }

};

int main() {
 DynamicArray d(5),d1(4) ;
 d.InsertValue(0,45) ;
 d.InsertValue(1,55) ;
 d.InsertValue(2,60) ;
 d.InsertValue(3,80) ;
 d.InsertValue(4,100) ;
 d.InsertValue(4,101) ;
 d.InsertValue(1,5) ;
 d.Display();

return 0;
}