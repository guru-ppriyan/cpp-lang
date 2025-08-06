#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // File created and writting
    ofstream out("data.txt");
    out << "Guru, Hi  Hello\n";
    
    out.close();

    // get the file 
    ifstream in("data.txt");
    string line;
    // read file
    while (getline(in, line)) {
        cout << line << endl;
    }

    in.close();

    return 0;
}
