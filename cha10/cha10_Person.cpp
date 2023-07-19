#include "cha10_Person.h"
#include <string.h>
#include <iostream>

Person::Person(const std::string & ln, const char * fn) {
    lname_ = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    std::cout << fname << " " << lname_ << std::endl;
}

void Person::FormalShow() const {
    std::cout << lname_ << ", " << fname << std::endl;
}