#pragma once
#include <iostream>

namespace VECTOR {
    class Vect {
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_x();
        void set_y();
        void set_mag();
        void set_ang();
    public:
        Vect();
        Vect(double n1, double n2, Mode form = RECT);
        ~Vect();
        void reset(double n1, double n2, Mode form = RECT);
        double xVal() const {return x};
        double yVal() const {return y};
        double magVal() const {return mag};
        double angVal() const {return ang};
        void rect_mode();
        void pol_mode();
        Vect operator+(const Vect & b) const;
        Vect operator-(const Vect & b) const;
        Vect operator-() const;
        Vect operator*(double n) const;
        friend Vect operator*(double n, const Vect & a);
        friend std::ostream & operator<<(std::ostream & os, const Vect & v);
    };
}
