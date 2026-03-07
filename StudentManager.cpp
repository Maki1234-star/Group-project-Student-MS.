#include "StudentManager.h"
#include <iostream>

using namespace std;

StudentManager::~StudentManager() {
    for (int i = 0; i < (int)students.size(); i++) {
        delete students[i];
    }
}

void StudentManager::addStudent(Student* student) {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i]->getId() == student->getId()) {
            cout << "Student with this ID already exists!\n";
            return;
        }
    }

    students.push_back(student);
    cout << "Student added successfully.\n";
}

void StudentManager::removeStudent(int id) {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i]->getId() == id) {
            delete students[i];
            students.erase(students.begin() + i);
            cout << "Student removed successfully.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::searchStudent(int id) const {
    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i]->getId() == id) {
            students[i]->display();
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::displayAll() const {
    for (int i = 0; i < (int)students.size(); i++) {
        students[i]->display();
    }
}