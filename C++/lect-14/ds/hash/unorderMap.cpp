#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert values
    marks["Alice"] = 85;
    marks["Bob"] = 90;
    marks["Charlie"] = 78;
    marks["ram"] = 78;
    marks["guru"] = 78;
    marks["priyan"] = 78;

    // Access
    cout << "GRU's marks: " << marks["guru"] << endl;

    // Iterate
    for (auto& pair : marks) {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Search
    // if (marks.find("Bob") != marks.end()) {
    //     cout << "Bob is found!" << endl;
    // }

    return 0;
}
