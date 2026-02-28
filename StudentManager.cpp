#include "StudentManager.h"
#include <iostream>

using namespace std;

void StudentManager::addStudent(string name, int id, string department) {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i].getId() == id) {
            cout << "Student with this ID already exists!\n";
            return;
        }
    }

    Student newStudent(name, id, department);
    students.push_back(newStudent);
    cout << "Student added successfully.\n";
}

void StudentManager::removeStudent(int id) {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i].getId() == id) {
            students.erase(students.begin() + i);
            cout << "Student removed successfully.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::searchStudent(int id) const {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i].getId() == id) {
            cout << "Student found:\n";
            students[i].display();
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::updateStudent(int id) {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i].getId() == id) {
            string newName, newDept;

            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, newName);

            cout << "Enter new department: ";
            getline(cin, newDept);

            students[i].setName(newName);
            students[i].setDepartment(newDept);

            cout << "Student updated successfully.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::displayAll() const {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }

    for (int i = 0; i < (int)students.size(); i++) {
        students[i].display();
    }
}