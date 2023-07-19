#pragma once

namespace SALES {
    // const int QUARTERS = 4;
    // struct Sales {
    //     double sales[QUARTERS];
    //     double average;
    //     double max;
    //     double min;
    // };

    // void setSales(Sales & s, const double ar[], int n);
    // void setSales(Sales & s);
    // void showSales(const Sales & s);
    class Sales {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void showSales() const;
    };
};