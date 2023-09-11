// 1.
#include <iostream>
#include "Cow.h"

int main() {
    using namespace std;
    
    Cow test1("xiaozhang", "hhh", 77);
    test1.ShowCow();
    Cow test2("xiaoming", "play", 98);
    test2.ShowCow();
    Cow test3 = test2;
    test3.ShowCow();
    test3 = test1;
    test3.ShowCow();

    cout << "done." << endl;
    return 0;
}