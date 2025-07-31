#include <iostream>
using namespace std;

// function declaration

void check_palindrome(int n){

    int P=n;
    int rev = 0;
    while (P != 0)
    {
        rev = rev * 10 + P;
        P = P % 10;
    }
}


int main(){

}


