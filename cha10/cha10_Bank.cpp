#include "cha10_Bank.h"
#include <iostream>

Bank::Bank() {
    name_ = "";
    account_ = "";
    money_ = 0;
}

Bank::Bank(const std::string name, const std::string account, double money) {
    name_ = name;
    account_ = account;
    money_ = money;
}

void Bank::show() const {
    std::cout << "name: " << name_ << ", account: " << account_ << ", money: " << money_ << std::endl;
}

bool Bank::deposit(double money) {
    money_ += money;
    return true;
}

bool Bank::takeOut(double money) {
    if (money > money_) {
        std::cout << "you only have $" << money_ << std::endl;
        std::cout << "you have money less than " << money << std::endl;
        return false;
    }
    money_ -= money;
    return true;
}

