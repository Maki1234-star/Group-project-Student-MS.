#include "Student.h"
#include "StudentException.h"
#include <iostream>

using namespace std;

Student::Student() : name(""), id(0), department("") {}

Student::Student(const string& n, int i, const string& d) : name(n), id(0), department("") {
    setName(n);
    setId(i);
    setDepartment(d);
}

Student::~Student() {}

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
    if (n.empty()) {
        throw StudentException("Student name cannot be empty.");
    }
    name = n;
}

void Student::setId(int i) {
    if (i <= 0) {
        throw StudentException("Student ID must be a positive number.");
    }
    id = i;
}

void Student::setDepartment(const string& d) {
    if (d.empty()) {
        throw StudentException("Department cannot be empty.");
    }
    department = d;
}

void Student::display() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Department: " << department << endl;
}
