#include "Stonewt_2.h"
#include <iostream>

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = lbs - stone * Lbs_per_stn;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt() {}

void Stonewt::show_stn() const {
    std::cout << stone << " stones, " << pds_left << " pounds." << std::endl;
}

void Stonewt::show_pds() const {
    std::cout << pounds << " pounds." << std::endl;
}

bool Stonewt::operator==(const Stonewt & s) const {
    return pounds == s.pounds;
}

bool Stonewt::operator!=(const Stonewt & s) const {
    return pounds != s.pounds;
}

bool Stonewt::operator>=(const Stonewt & s) const {
    return pounds >= s.pounds;
}

bool Stonewt::operator<=(const Stonewt & s) const {
    return pounds <= s.pounds;
}

bool Stonewt::operator>(const Stonewt & s) const {
    return pounds > s.pounds;
}

bool Stonewt::operator<(const Stonewt & s) const {
    return pounds < s.pounds;
}