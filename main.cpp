#include <iostream>
#include "StudentManager.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Display All Students\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string name, department;
        int id;

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Department: ";
            getline(cin, department);
            manager.addStudent(name, id, department);
            break;

        case 2:
            cout << "Enter ID to remove: ";
            cin >> id;
            manager.removeStudent(id);
            break;

        case 3:
            cout << "Enter ID to search: ";
            cin >> id;
            manager.searchStudent(id);
            break;

        case 4:
            cout << "Enter ID to update: ";
            cin >> id;
            manager.updateStudent(id);
            break;

        case 5:
            manager.displayAll();
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}