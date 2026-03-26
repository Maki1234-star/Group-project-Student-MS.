#include "Graduate.h"
#include "StudentException.h"
#include <iostream>

using namespace std;

Graduate::Graduate(const string& n, int i, const string& d, const string& topic)
    : Student(n, i, d), researchTopic(topic) {
    if (topic.empty()) {
        throw StudentException("Research topic cannot be empty.");
    }
}

void Graduate::display() const {
    cout << "[Graduate Student]\n";
    Student::display();
    cout << "Research Topic: " << researchTopic << endl;
    cout << "----------------------\n";
}
