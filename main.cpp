#include <iostream>
#include "StudentManager.h"
#include "Undergraduate.h"
#include "Graduate.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n1. Add Undergraduate\n";
        cout << "2. Add Graduate\n";
        cout << "3. Display All\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        string name, dept, topic;
        int id, year;

        switch (choice) {
        case 1:
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "ID: ";
            cin >> id;
            cout << "Department: ";
            cin.ignore();
            getline(cin, dept);
            cout << "Year: ";
            cin >> year;

            manager.addStudent(new Undergraduate(name, id, dept, year));
            break;

        case 2:
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "ID: ";
            cin >> id;
            cout << "Department: ";
            cin.ignore();
            getline(cin, dept);
            cout << "Research Topic: ";
            getline(cin, topic);

            manager.addStudent(new Graduate(name, id, dept, topic));
            break;

        case 3:
            manager.displayAll();
            break;
        }

    } while (choice != 4);

    return 0;
}