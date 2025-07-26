#include<iostream>
using namespace std ;
// Function OverLoading

void greetings() {
     cout<<"Have a Great Day"<<endl;
}
// 2 function
void greetings(string str) {
     cout<<"Have a Great Day! \t"<<str<<endl;
}
// 3 Function 
void greetings(string name,int age) {
     cout<<"My Name is:"<<name<<"age :"<<age<<endl;
}
void towAccess(int b,int c){
    cout<<"add :"<<b+c<<endl;
}

void towAccess(float b,float c){
    cout<<"add :"<<b+c<<endl;
}

void towAccess(float b,int c){
    cout<<"add :"<<b<<"int value:"<<c<<endl;
}

int main() {

    greetings();
    greetings("Guru");
    greetings("guru",17);
    towAccess(10,20); //int
    towAccess(10.45f,20.25f); //float
    towAccess(10.45f,20); //float and int
}