#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

using namespace std;

class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent(string name, int id, string department);
    void removeStudent(int id);
    void searchStudent(int id) const;
    void updateStudent(int id);
    void displayAll() const;
};

#endif