#include "cha10_Stack.h"
#include <iostream>

Stack::Stack() {
    top = 0;
    total = 0.0;
}

bool Stack::isempty() const { 
    return top == 0;
}

bool Stack::isfull() const {
    return top == MAX;
}

bool Stack::push(const Item & item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}

bool Stack::pop(Item & item) {
    if (top > 0) {
        item = items[--top];
        total += item.payment;
        std::cout << "total value is " << total << std::endl;
        return true;
    }
    return false;
}