#include "Stonewt.h"

Stonewt::Stonewt(double lbs, Mode m) {
    mode = m;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = lbs - stone * Lbs_per_stn;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, Mode m) {
    mode = m;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
    mode = STN;
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt() {}

Stonewt Stonewt::operator+(const Stonewt & s) const {
    return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & s) const {
    return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(double k) const {
    return Stonewt(k * pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
    if (s.mode == Stonewt::STN) {
        os << s.pounds << " pounds.";
    } else if (s.mode == Stonewt::PDS) {
        os << s.stone << "stones, " << s.pds_left << "pounds_left."; 
    } else {
        os << "wrong mode.";
    }
    return os;
}