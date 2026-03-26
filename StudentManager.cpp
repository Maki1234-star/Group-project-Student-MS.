#include "StudentManager.h"
#include "StudentException.h"
#include "TemplateUtils.h"
#include <iostream>

using namespace std;

StudentManager::~StudentManager() {
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        delete students[i];
    }
}

void StudentManager::addStudent(Student* student) {
    if (student == nullptr) {
        throw StudentException("Cannot add a null student.");
    }

    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        if (students[i]->getId() == student->getId()) {
            delete student;
            throw StudentException("Student with this ID already exists.");
        }
    }

    students.push_back(student);
    cout << "Student added successfully." << endl;
}

void StudentManager::removeStudent(int id) {
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        if (students[i]->getId() == id) {
            delete students[i];
            students.erase(students.begin() + i);
            cout << "Student removed successfully." << endl;
            return;
        }
    }

    throw StudentException("Student not found.");
}

void StudentManager::searchStudent(int id) const {
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        if (students[i]->getId() == id) {
            students[i]->display();
            return;
        }
    }

    throw StudentException("Student not found.");
}

void StudentManager::displayAll() const {
    if (students.empty()) {
        throw StudentException("No students available.");
    }

    displayValue("Total Students: ", students.size());
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        students[i]->display();
    }
}
