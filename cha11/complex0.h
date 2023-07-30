#pragma once
#include <iostream>

class complex {
private:
    double real;
    double imaginary;
public:
    complex();
    complex(double r, double i);
    complex operator+(const complex & c) const;
    complex operator-(const complex & c) const;
    complex operator*(const complex & c) const;
    complex operator*(double k) const;
    complex operator~() const;
    friend complex operator*(double k, const complex & c) {return c * k;}
    friend std::ostream & operator<<(std::ostream & os, const complex & c);
    friend std::istream & operator>>(std::istream & is, complex & c);
};