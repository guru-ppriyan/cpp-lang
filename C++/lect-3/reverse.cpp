#include<iostream>
using namespace std ;

int main() {
    int num = 3000;
    int original =0, reverse = 0,digit;
    original = num;
    int n =0;
    for(int i = 0;num>0;i++){
        digit = num%10;
        // cout<<"before loop reverse \t"<<reverse<<endl;
        reverse = reverse * 10 + digit;
        // cout<<"after loop reverse \t"<<reverse<<endl;

        num = num/10;
    }
    cout<<"original \t"<<original<<endl;
    cout<<"reverse \t"<<reverse<<endl;

}