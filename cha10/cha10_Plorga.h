#pragma once

class Plorga {
private:
    static const int MAX = 19;
    char name_[MAX];
    int ci_;
public:
    Plorga(const char * name = "Plorga", int ci = 50);
    void show() const;
    void setCI(int ci);
};