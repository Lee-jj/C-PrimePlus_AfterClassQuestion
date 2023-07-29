#include "mytime3.h"

Time::Time() {
    hour = minutes = 0;
}

Time::Time(int h, int m) {
    hour = h;
    minutes = m;
}

void Time::AddHr(int h) {
    hour += h;
}

void Time::AddMin(int m) {
    minutes += m;
    hour += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m) {
    hour = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2) {
    int mTol = t1.minutes + t2.minutes;
    int hTol = t1.hour + t2.hour + mTol / 60;
    mTol %= 60;
    return Time(hTol, mTol);
}

Time operator-(const Time & t1, const Time & t2) {
    long totalMin = t1.hour * 60 + t1.minutes - t2.hour * 60 - t2.minutes;
    return Time(totalMin / 60, totalMin % 60);
}

Time operator*(double n, const Time & t) {
    long totalMin = n * t.hour * 60 + n * t.minutes;
    return Time(totalMin / 60, totalMin % 60);
}

std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hour << " hours, " << t.minutes << " minutes";
    return os;
}