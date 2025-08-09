#include <iostream>
using namespace std;

int LinearSg(int arr[],int len, int searchValue){
    for(int i=0; i<len ;i++){
        if (arr[i]==searchValue)
        return i ;
    }
    return -1 ;
}


int main(){
    int arr[] = {12,24,36,48,60,72,84,96,108,120,132,144,156,168,180};
    
    int len= sizeof(arr)/sizeof(arr[0]) ;
    int key= 16758;
    int result= LinearSg( arr,len, key);
    if (result==-1){
        cout<<"Element are not accesible"<<endl;
   } else {
    cout<<"index of the element is found "<<"value : "<<arr[result]<<" place of index : "<<result<<endl;

   }
    return 0;
}