#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

using namespace std;

class StudentManager {
private:
    vector<Student*> students;

public:
    ~StudentManager();

    void addStudent(Student* student);
    void removeStudent(int id);
    void searchStudent(int id) const;
    void displayAll() const;
};

#endif