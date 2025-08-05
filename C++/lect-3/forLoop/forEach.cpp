#include<iostream>

using namespace std;

int main(){

    int size = 4;
    int arr[] ={11,12,4,5,6,7};
    
    // int length=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    // for(int i =0;i<length;i++){
    //     sum+=arr[i];
    //     // cout<<i<<"value"<<sum<<endl;

    // }

    for(auto g:arr){
        sum+=g;
    }
    
    cout <<"For Each "<<endl;
    cout<<"sum value = "<<sum<<endl;

    return 0;
}