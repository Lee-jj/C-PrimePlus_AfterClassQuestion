#include "cha10_Move.h"
#include <iostream>

Move::Move(double a, double b) {
    x_ = a;
    y_ = b;
}

void Move::showMove() const {
    std::cout << "x_ = " << x_ << std::endl;
    std::cout << "y_ = " << y_ << std::endl;
}

Move Move::add(const Move & m) const {
    return Move(this->x_ + m.x_, this->y_ + m.y_);
}

void Move::reset(double a, double b) {
    x_ = a;
    y_ = b;
}