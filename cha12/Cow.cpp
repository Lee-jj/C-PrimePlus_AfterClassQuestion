#include "Cow.h"
#include<cstring>
#include <iostream>

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
    strncpy(name, nm, 20);
    int len = strlen(ho) + 1;
    hobby = new char[len];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c) {
    strncpy(name, c.name, 20);
    int len = strlen(c.hobby);
    hobby = new char[len];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete []hobby;
}

Cow & Cow::operator=(const Cow & c) {
    if (this == &c) return *this;
    strncpy(name, c.name, 20);
    int len = strlen(c.hobby);
    delete []hobby;
    hobby = new char[len];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}


void Cow::ShowCow() const {
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}