#pragma once
#include <string>

class Person
{
private:
    static const int LIMIT = 25;
    std::string lname_;
    char fname[LIMIT];
public:
    Person() {lname_ = ""; fname[0] = '\0';}
    Person(const std::string & ln, const char * fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};


