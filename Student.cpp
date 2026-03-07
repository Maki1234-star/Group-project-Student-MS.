#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : name(""), id(0), department("") {}

Student::Student(const string& n, int i, const string& d) {
    name = n;
    department = d;
    id = (i > 0) ? i : 0;
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
    name = n;
}

void Student::setDepartment(const string& d) {
    department = d;
}

void Student::display() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Department: " << department << endl;
}