#include <iostream>
using namespace std;

struct Student {
    char name[20];
    int marks[5];
};

int main() {
    Student s = {"Aman", {80, 75, 90, 85, 95}};

    cout << "Name: " << s.name << endl;
    cout << "Marks: ";
    for(int i=0;i<5;i++) cout << s.marks[i] << " ";
    return 0;
}
