#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names = {"Zara", "Amit", "John", "Meena", "Bob"};
    sort(names.begin(), names.end());

    cout << "Sorted names:\n";
    for (const auto& name : names)
        cout << name << endl;

    return 0;
}