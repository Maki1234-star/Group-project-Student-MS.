#ifndef GRADUATE_H
#define GRADUATE_H

#include "Student.h"

class Graduate : public Student {
private:
    string researchTopic;

public:
    Graduate(const string& n, int i, const string& d, const string& topic);
    void display() const override;
};

#endif