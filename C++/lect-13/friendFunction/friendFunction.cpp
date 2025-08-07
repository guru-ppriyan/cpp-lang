#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    int len=12;
    Box(int l) : length(l) {}

    // Friend function declaration
    friend void showLength(Box b);
};

// Definition friend function
void showLength(Box b) {
    cout << "Length of box: " << b.length << endl;  // Can access private data
}

// Normal function
void showValue(Box b) {
    cout << "Length of box: " << b.len << endl;  // Cannot access private data
}

void showValue1(Box b) {
    cout << "1.Length of box: " << b.len << endl;  // Cannot access private data
}
void showValue2(Box b) {
    cout << "2.Length of box: " << b.len << endl;  // Cannot access private data
}


int main() {
    Box b2(10);
    showLength(b2);  // Output: Length of box: 10
    Box b1(12);
    showValue(b1);
    showValue2(b1);
    showValue1(b1);
    
    return 0;
}
