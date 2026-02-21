#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int id;
    string department;

public:
    Student() : name(""), id(0), department("") {}

    Student(const string& n, int i, string d) : name(n), id(i), department(d) {
        if(id > 0) {
            id = i;
        } else {
            cout << "Invalid ID! ID cannot be negative." << endl;
            id = 0;
        }
    }
    
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    string getDepartment() const {
        return department;
    }

    void setName(const string& n) {
        name = n;
    }

    void setId(int i) {
        if(id > 0) {
            id = i;
        } else {
            cout << "Invalid ID! ID cannot be negative." << endl;
        }
    }

    void setDepartment(const string& d) {
        department = d;
    }

    void updateInfo(const string& newName, const string& newDepartment) {
        name = newName;
        department = newDepartment;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};

class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent(string name, int id, string department) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                cout << "Student with this ID already exists!\n";
                return;
            }
        }

        Student newStudent(name, id, department);
        students.push_back(newStudent);
        cout << "Student added successfully.\n";
    }

    void removeStudent(int id) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                students.erase(students.begin() + i);
                cout << "Student removed successfully.\n";
                return;
            }
        }
        cout << "Student not found.\n";
    }

    void searchStudent(int id) const {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                cout << "Student found:\n";
                students[i].display();
                return;
            }
        }
        cout << "Student not found.\n";
    }

    void updateStudent(int id) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getId() == id) {
                string newName, newDept;

                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, newName);

                cout << "Enter new department: ";
                getline(cin, newDept);

                students[i].setName(newName);
                students[i].setDepartment(newDept);

                cout << "Student updated successfully.\n";
                return;
            }
        }
        cout << "Student not found.\n";
    }

    void displayAll() const {
        if (students.empty()) {
            cout << "No students available.\n";
            return;
        }

        for (int i = 0; i < students.size(); i++) {
            students[i].display();
        }
    }
};