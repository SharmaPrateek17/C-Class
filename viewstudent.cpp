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
    Date dob;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Roll number: ";
        cin >> students[i].rollNo;
        cin.ignore();

        cout << "Name: ";
        cin.getline(students[i].name, 50);

        cout << "Date of birth (day month year): ";
        cin >> students[i].dob.day >> students[i].dob.month >> students[i].dob.year;
        cin.ignore();
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Date of Birth: " << students[i].dob.day << "/" << students[i].dob.month << "/" << students[i].dob.year << endl;
    }

    delete[] students;
    return 0;
}