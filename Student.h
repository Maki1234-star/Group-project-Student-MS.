#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    string department;

public:
    Student();
    Student(const string& n, int i, const string& d);

    string getName() const;
    int getId() const;
    string getDepartment() const;

    void setName(const string& n);
    void setId(int i);
    void setDepartment(const string& d);

    void updateInfo(const string& newName, const string& newDepartment);
    void display() const;
};

#endif