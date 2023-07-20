#pragma once

typedef int Item;
const int MAX = 10;

class List {
private:
    Item arr_[MAX];
    int count_;
public:
    List();
    bool add(Item it);
    bool isempty() const;
    bool isfull() const;
    void visit(void (*pf)(Item &));
    void show() const;
};