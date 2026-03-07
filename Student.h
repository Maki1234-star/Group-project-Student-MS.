#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
protected:
    string name;
    int id;
    string department;

public:
    Student();
    Student(const string& n, int i, const string& d);
    virtual ~Student();

    string getName() const;
    int getId() const;
    string getDepartment() const;

    void setName(const string& n);
    void setDepartment(const string& d);

    virtual void display() const;
};

#endif