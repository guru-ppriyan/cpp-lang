#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10, b = 0;

        if (b == 0)
            throw runtime_error("Division by zero is not allowed"); // throwing exception

        cout << "Result: " << a / b << endl;
    }
    catch (const runtime_error& err) { // catching specific exception
        cout << "Error: " << err.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
