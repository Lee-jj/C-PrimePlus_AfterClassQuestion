#include "cha10_Plorga.h"
#include<string.h>
#include <iostream>

Plorga::Plorga(const char * name, int ci) {
    strcpy(name_, name);
    ci_ = ci;
}

void Plorga::show() const {
    std::cout << "name is: " << name_ << std::endl;
    std::cout << "ci is: " << ci_ << std::endl;
}

void Plorga::setCI(int ci) {
    ci_ = ci;
}