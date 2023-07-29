#include "Vect_2.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    const double Rad_to_deg = 45.0 / atan(1.0);
    
    void Vect::set_x() {
        x = this->magVal() * cos(angVal());
    }

    void Vect::set_y() {
        y = magVal() * sin(angVal());
    }

    // void Vect::set_mag() {
    //     mag = sqrt(x * x + y * y);
    // }

    // void Vect::set_ang() {
    //     if (x == 0.0 && y == 0.0)
    //         ang = 0.0;
    //     else
    //         ang = atan2(y, x);
    // }

    Vect::Vect() {
        x = y = 0.0;
        mode = RECT;
    }

    Vect::Vect(double n1, double n2, Mode form) {
        mode = form;
        if (mode == RECT) {
            x = n1;
            y = n2;
            // set_ang();
            // set_mag();
        } else if (mode == POL) {
            x = n1 * cos(n2 / Rad_to_deg);
            y = n1 * sin(n2 / Rad_to_deg);
        } else {
            cout << "Incorrect 3rd argument to Vector() -- vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vect::~Vect() {}

    void Vect::reset(double n1, double n2, Mode form) {
        mode = form;
        if (mode == RECT) {
            x = n1;
            y = n2;
            // set_ang();
            // set_mag();
        } else if (mode == POL) {
            x = n1 * cos(n2 / Rad_to_deg);
            y = n1 * sin(n2 / Rad_to_deg);
        } else {
            cout << "Incorrect 3rd argument to Vector() -- vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    double Vect::magVal() const {
        return sqrt(x * x + y * y);
    }

    double Vect::angVal() const {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    void Vect::rect_mode() {
        mode = RECT;
    }

    void Vect::pol_mode() {
        mode = POL;
    }

    Vect Vect::operator+(const Vect & b) const {
        return Vect(x + b.x, y + b.y);
    }

    Vect Vect::operator-(const Vect & b) const {
        return Vect(x - b.x, y - b.y);
    }

    Vect Vect::operator-() const {
        return Vect(-x, -y);
    }

    Vect Vect::operator*(double n) const {
        return Vect(n * x, n * y);
    }

    Vect operator*(double n, const Vect & a) {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vect & v) {
        if (v.mode == Vect::RECT) {
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        } else if (v.mode == Vect::POL) {
            os << "(mag, ang) = (" << v.magVal() << ", " << v.angVal() << ")";
        } else {
            os << "Vect object mode is invalid.";
        }
        return os;
    } 
}