#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : name(""), id(0), department("") {}

Student::Student(const string& n, int i, const string& d) {
    name = n;
    department = d;

    if (i > 0) {
        id = i;
    } else {
        cout << "Invalid ID! ID cannot be negative." << endl;
        id = 0;
    }
}

string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

string Student::getDepartment() const {
    return department;
}

void Student::setName(const string& n) {
    name = n;
}

void Student::setId(int i) {
    if (i > 0) {
        id = i;
    } else {
        cout << "Invalid ID! ID cannot be negative." << endl;
    }
}

void Student::setDepartment(const string& d) {
    department = d;
}

void Student::updateInfo(const string& newName, const string& newDepartment) {
    name = newName;
    department = newDepartment;
}

void Student::display() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Department: " << department << endl;
    cout << "----------------------" << endl;
}