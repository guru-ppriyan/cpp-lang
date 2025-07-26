#include<iostream>
using namespace std ;

template <typename T>

void merge(T a, T b){
    cout<<"merger :"<<a<<"  "<<b<<endl;
}



int main(){


    merge(20,20); //int
    merge('c','d'); //char
    merge("Guru","Priyan"); //string


    return 0;
}