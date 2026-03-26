#include <iostream>
#include "StudentManager.h"
#include "Undergraduate.h"
#include "Graduate.h"
#include "StudentException.h"
#include "TemplateUtils.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n1. Add Undergraduate\n";
        cout << "2. Add Graduate\n";
        cout << "3. Display All\n";
        cout << "4. Search Student\n";
        cout << "5. Remove Student\n";
        cout << "6. Exit\n";

        choice = getValidatedInput<int>("Choice: ");

        try {
            switch (choice) {
                case 1: {
                    string name = getValidatedInput<string>("Name: ");
                    int id = getValidatedInput<int>("ID: ");
                    string dept = getValidatedInput<string>("Department: ");
                    int year = getValidatedInput<int>("Year: ");

                    manager.addStudent(new Undergraduate(name, id, dept, year));
                    break;
                }
                case 2: {
                    string name = getValidatedInput<string>("Name: ");
                    int id = getValidatedInput<int>("ID: ");
                    string dept = getValidatedInput<string>("Department: ");
                    string topic = getValidatedInput<string>("Research Topic: ");

                    manager.addStudent(new Graduate(name, id, dept, topic));
                    break;
                }
                case 3:
                    manager.displayAll();
                    break;
                case 4: {
                    int id = getValidatedInput<int>("Enter ID to search: ");
                    manager.searchStudent(id);
                    break;
                }
                case 5: {
                    int id = getValidatedInput<int>("Enter ID to remove: ");
                    manager.removeStudent(id);
                    break;
                }
                case 6:
                    cout << "Exiting program..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please select a number from 1 to 6." << endl;
            }
        } catch (const StudentException& e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 6);

    return 0;
}
