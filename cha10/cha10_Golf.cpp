#include "cha10_Golf.h"
#include <string.h>
#include <iostream>

Golf::Golf() {fullname_[0] = '\0'; handicap_ = 0;}

Golf::Golf(const char * name, int hc) {
    strcpy(fullname_, name);
    handicap_ = hc;
}

int Golf::setgolf() {
    using namespace std;
    cout << "enter fullname: " << endl;
    cin.getline(fullname_, Len);
    if (strlen(fullname_) == 0)
        return 0;
    else {
        cout << "enter handicap:" << endl;
        cin >> handicap_;
        cin.get();
        return 1;
    }
}

// int setgolf(golf & g) {
    
//     int lenght = 40;
//     char name[40];
//     cout << "Please enter the name of this golf: ";
//     cin.getline(name, 40);
//     cout << "Please enter the handicap of this golf: ";
//     cin >> g.handicap;
//     cin.get(); // 把输入数字后面的换行符取出来
//     strcpy(g.fullname, name);
//     if (strlen(name) == 0)
//         return 0;
//     return 1;
// }

void Golf::handicap(int hc) {
    handicap_ = hc;
}

void Golf::showgolf() const {
    using std::cout;
    using std::endl;
    cout << "full name of ths golf is: " << fullname_ << endl;
    cout << "handicap of this golf is: " << handicap_ << endl;
}