#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s = {101, "Rahul"};
    Student *ptr = &s;

    cout << "Roll: " << ptr->roll << endl;
    cout << "Name: " << ptr->name << endl;
    return 0;
}
