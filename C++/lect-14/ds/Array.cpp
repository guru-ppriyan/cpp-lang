#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30};

    arr[3]=50;
    arr[5]=60;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
