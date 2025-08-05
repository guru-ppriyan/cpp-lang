#include <iostream>
#include <vector> // header file vector
using namespace std;

int main() {
    
    // int arr[] ={1,2,3,};
    // instead of that we using the vector 


    vector<int> arr;  // Declare vector of integers

    // Adding elements
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    
    

    arr.pop_back();

    // Access elements
    cout << "First element: " << arr[0] << endl;
    arr.clear();
    // Iterate
    for (auto val : arr) {
        cout << val << " ";
    }
    cout<<"length of array = "<<arr.size()<<endl;
    return 0;
}
