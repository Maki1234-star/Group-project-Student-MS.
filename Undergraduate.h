#ifndef UNDERGRADUATE_H
#define UNDERGRADUATE_H

#include "Student.h"

class Undergraduate : public Student {
private:
    int year;

public:
    Undergraduate(const std::string& n, int i, const std::string& d, int y);
    void display() const override;
};

#endif
