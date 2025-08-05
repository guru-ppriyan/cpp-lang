#include<iostream>

using namespace std;

int main(){

    int size = 4;
    int arr[] ={1,2,4,5,6,7};
    
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"enter the length of the array"<<length<<endl;

    // index values start from 0
    // In the second scenario of the length is starts from 1(Numerical values)

    for(int i =0;i<length;i++){
        cout<<"Value of size "<<arr[i]<<endl;
    }

    return 0;
}