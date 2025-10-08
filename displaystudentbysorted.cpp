#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
    }
    sort(s, s + n, compare);
    cout << "\nSorted List:\n";
    for (int i = 0; i < n; ++i)
        cout << s[i].name << " - " << s[i].marks << endl;
    return 0;
}