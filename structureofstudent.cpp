#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNo;
    char name[50];
    Date dob; // Structure within a structure
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore(); // Clear newline from buffer

    cout << "Enter name: ";
    cin.getline(s.name, 50);

    cout << "Enter date of birth (day month year): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Information:\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Date of Birth: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}