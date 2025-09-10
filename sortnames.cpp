#include <iostream>
#include <string>
#include <algorithm>  // for sort
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[50];  // array for names

    cout << "Enter names:\n";
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // sort using STL
    sort(names, names + n);

    cout << "\nNames in sorted order:\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
