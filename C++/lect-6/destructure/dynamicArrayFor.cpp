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
    void displayArray(){
        for (int i=0;i<size;i++){
            arr[i] = i*10;
            cout<<i<<" = "<<arr[i]<<" ";
        }
        cout<<endl;
    }
    ~DynamicArray(){
        delete[] arr; //free out the memory
        cout<<"Destructor the Object or memory Erase or Free Memory"<<endl;
    }
};

int main() {
 DynamicArray d(10),d1(1) ;
  d.displayArray();
  d1.displayArray();

return 0;
}