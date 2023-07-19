#pragma once

// const int Len = 40;
// struct golf {
//     char fullname[Len];
//     int handicap;
// };

// void setgolf(golf & g, const char * name, int hc);
// int setgolf(golf & g);
// void handicap(golf & g, int hc);
// void showgolf(const golf & g);

class Golf {
private:
    static const int Len = 40;
    char fullname_[Len];
    int handicap_;
public:
    Golf();
    Golf(const char * name, int hc);
    int setgolf();
    void handicap(int hc);
    void showgolf() const;
};