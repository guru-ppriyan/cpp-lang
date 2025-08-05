#include<iostream>

using namespace std;

int main(){

    int arr[] ={11977699,14654672,48874458,657611575,66576888,78755854};
    int max =arr[0];
    int min =arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i =0;i<length;i++){
            if (arr[i]<min){
                min=arr[i];
            }
        }
        cout<<"Minimum value = "<<min<<endl;

    for(auto g:arr){
        if(max < g){
            max =g;
        }
    }
    
    cout <<"For Each "<<endl;
    cout<<"maximum value = "<<max<<endl;

    return 0;
}