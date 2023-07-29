#pragma once
#include <iostream>

class Time {
private:
    int hour;
    int minutes;
public:
    Time();
    Time(int h, int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(double n, const Time & t);
    friend Time operator*(const Time & t, double n) {return n * t;}
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};