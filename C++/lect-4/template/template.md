What is a Template? //keyword//
Templates allow you to write generic code that works with any data type.

template <typename T> → T is a placeholder for any data type.

// At compile time, the compiler generates code for the actual data types used.

// Why the Error Happened?
// T is a placeholder defined only inside template functions.

// If you try to use T in a non-template function, the compiler doesn't recognize it.
// void findValue(T x,T y){  //Error: 'T' is unknown here
//     cout <<"value :"<<x<<y;
// }

// // Function template
// template <typename T>
// void findMax(T a, T b) {
//     cout << "display: " << a << " " << b << endl;
// }

// // Fix: make findValue a template too
// template <typename U>
// void findValue(U x, U y) {
//     cout << "value: " << x << " " << y << endl;
// }
