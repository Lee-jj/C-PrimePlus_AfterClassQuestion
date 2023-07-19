#pragma once
#include <string>

class Bank {
private:
    std::string name_;
    std::string account_;
    double money_;
public:
    Bank();
    Bank(const std::string name, const std::string account, double money);
    void show() const;
    bool deposit(double money);
    bool takeOut(double money);
};