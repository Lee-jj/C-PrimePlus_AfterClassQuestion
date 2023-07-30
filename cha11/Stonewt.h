#pragma once
#include <iostream>

class Stonewt {
public:
    enum Mode{STN, PDS};
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt(double lbs, Mode m=STN);
    Stonewt(int stn, double lbs, Mode m=PDS);
    Stonewt();
    ~Stonewt();
    void set_mode(Mode m) {mode = m;}
    Stonewt operator+(const Stonewt & s) const;
    Stonewt operator-(const Stonewt & s) const;
    Stonewt operator*(double k) const;
    friend Stonewt operator*(double k, const Stonewt & s) {return s * k;}
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};