#pragma once

class Move {
private:
    double x_;
    double y_;
public:
    Move(double a = 0, double b = 0);
    void showMove() const;
    Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);
};