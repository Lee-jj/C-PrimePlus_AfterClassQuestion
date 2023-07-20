#include "cha10_List.h"
#include <iostream>

List::List() {
    count_ = 0;
}

bool List::add(Item it) {
    if (isfull()) {
        std::cout << "error: list is full." << std::endl;
        return false;
    }
    arr_[count_ ++] = it;
    return true;
}

bool List::isempty() const {
    return count_ == 0;
}

bool List::isfull() const {
    return count_ == MAX;
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < count_; ++i)
        (*pf) (arr_[i]);
}

void List::show() const {
    std::cout << "show arr: " << std::endl;
    for (int i=0; i < count_; ++i)
        std::cout << arr_[i] << " ";
    std::cout << std::endl;
}