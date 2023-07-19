#pragma once

struct custmoer {
    char fullname[35];
    double payment;
};

typedef custmoer Item;

class Stack {
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;
    double total;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};