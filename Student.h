#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
protected:
    std::string name;
    int id;
    std::string department;

public:
    Student();
    Student(const std::string& n, int i, const std::string& d);
    virtual ~Student();

    std::string getName() const;
    int getId() const;
    std::string getDepartment() const;

    void setName(const std::string& n);
    void setId(int i);
    void setDepartment(const std::string& d);

    virtual void display() const;
};

#endif
