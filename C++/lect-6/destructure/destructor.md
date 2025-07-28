





```cpp

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called!" << endl;
    }
    
    ~Student() {  // Destructor
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor runs here
}  // Destructor automatically runs here


```