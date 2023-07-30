#include "complex0.h"

complex::complex() {
    real = imaginary = 0;
}

complex::complex(double r, double i) {
    real = r;
    imaginary = i;
}

complex complex::operator+(const complex & c) const {
    return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(const complex & c) const {
    return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator*(const complex & c) const {
    return  complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

complex complex::operator*(double k) const {
    return complex(k * real, k * imaginary);
}

complex complex::operator~() const {
    return complex(real, -imaginary);
}

std::ostream & operator<<(std::ostream & os, const complex & c) {
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c) {
    std::cout << "real: ";
    is >> c.real;
    if (is.fail())
        return is;
    std::cout << "imaginary: ";
    is >> c.imaginary;
    return is;
}