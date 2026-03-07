#include "Undergraduate.h"
#include <iostream>

using namespace std;

Undergraduate::Undergraduate(const string& n, int i, const string& d, int y)
    : Student(n, i, d), year(y) {}

void Undergraduate::display() const {
    cout << "[Undergraduate Student]\n";
    Student::display();
    cout << "Year: " << year << endl;
    cout << "----------------------\n";
}