#include<iostream>
using namespace std ;

template <typename T>

void merge(T a, T b){
    cout<<"merger :"<<a+b<<endl;
}

template <typename T ,typename U>
void twoMerge(T a, U b){
    cout<<"two merger :"<<a+b<<endl;
}

void swapTwoNumbers(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    
    
    int x =20, b=30;
    cout<<"outer function before"<<"x : "<<x<<" b : "<<b<<endl;
    swapTwoNumbers(x,b);
    cout<<"outer function After"<<"x : "<<x<<" b : "<<b<<endl;
    // sasme data type
    // merge(20,20); //int
    // merge('c','d'); //char
    // merge("Guru","Priyan"); //string
    // twoMerge(20,30.2);

    return 0;
}