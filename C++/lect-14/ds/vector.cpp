#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);  // Add element
    v.push_back(5);  // Add element
    v.push_back(4);  // Add element
    v.pop_back();  // Add element
    v.erase(v.begin() + 1); // remove 3rd element (value 3)

    for(int num : v)
        cout << num << " ";
    return 0;
}
