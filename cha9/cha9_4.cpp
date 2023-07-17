#include "cha9_4.h"
#include <iostream>

namespace SALES {
    void setSales(Sales & s, const double ar[], int n) {
        double sm = 0.0;
        double mx = ar[0], mn = ar[0];
        for (int i = 0; i < 4; ++i) {
            double temp = i < n ? ar[i] : 0.0;
            s.sales[i] = temp;
            sm += temp;
            mx = mx > temp ? mx : temp;
            mn = mn > temp ? temp : mn;
        }
        s.max = mx;
        s.min = mn;
        s.average = sm / 4;
    }

    void setSales(Sales & s) {
        using namespace std;
        cout << "Enter 4 numbers: " << endl;
        double temp;
        double sm = 0.0;
        double mx, mn;
        for (int i = 0; i < 4; ++i) {
            cin >> temp;
            s.sales[i] = temp;
            sm += temp;
            mx = i == 0 ? temp : (mx > temp ? mx : temp);
            mn = i == 0 ? temp : (mn > temp ? temp : mn);
        }
        s.max = mx;
        s.min = mn;
        s.average = sm / 4;
    }

    void showSales(const Sales & s) {
        using namespace std;
        cout << "average: " << s.average << " max: " << s.max << " min: " << s.min << endl;
        cout << "element of sales: ";
        for (int i = 0; i < 4; ++i) {
            cout << s.sales[i] << " ";
        }
        cout << endl;
    }
};