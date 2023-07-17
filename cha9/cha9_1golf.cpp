#include "cha9_1golf.h"
#include <string.h>
#include <iostream>

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g) {
    using namespace std;
    int lenght = 40;
    char name[40];
    cout << "Please enter the name of this golf: ";
    cin.getline(name, 40);
    cout << "Please enter the handicap of this golf: ";
    cin >> g.handicap;
    cin.get(); // 把输入数字后面的换行符取出来
    strcpy(g.fullname, name);
    if (strlen(name) == 0)
        return 0;
    return 1;
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    using std::cout;
    using std::endl;
    cout << "full name of ths golf is: " << g.fullname << endl;
    cout << "handicap of this golf is: " << g.handicap << endl;
}