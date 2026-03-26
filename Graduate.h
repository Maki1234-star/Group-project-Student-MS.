#ifndef GRADUATE_H
#define GRADUATE_H

#include "Student.h"

class Graduate : public Student {
private:
    std::string researchTopic;

public:
    Graduate(const std::string& n, int i, const std::string& d, const std::string& topic);
    void display() const override;
};

#endif
