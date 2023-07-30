/*** 11.8 复习题
 * 1. 使用成员函数重载乘法运算符：
 * Stonewt Stonewt::operator*(double k) const {      
 *      return Stonewt(st * k + lb * k / 14, lb * k % 14);
 * }
 * 2. 友元函数在类外定义，但是可以访问类成员，友元函数不能隐式的访问调用对象的成员，需要将成员运算符作为参数进行传递
 * 3. 不是。非成员函数可以访问类内的公有类成员
 * 4. friend Stonewt operator*(const Stonewt & temp, double k) const {
 *      return temp * k;
 * }
 * 5. == 哪些运算符不能重载？== sizeof . .* :: ?:
 * 6. 重载这些运算符只能用类成员函数吗？是的
 * 7. friend operator double(Vector & temp) {
 *      return temp.length;
 * }
*/

/*** 11.9 编程练习*/
// 1. 修改程序清单11.15 main() vect.h vect.cpp
// #include "Vect.h"
// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// #include <fstream>

// int main() {
//     using namespace std;
//     using VECTOR::Vect;
//     srand(time(0));
//     double direction;
//     Vect step;
//     Vect result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     ofstream f;
//     f.open("cha11_1.txt", ios::app);
//     cout << "Enter target distance (q to quit): ";
//     while (cin >> target) {
//         cout  << "Enter step length: ";
//         if (!(cin >> dstep))
//             break;
//         f << "Target distacne is: " << target << ", Step length is: " << dstep << endl;
//         while (result.magVal() < target) {
//             f << steps << ": " << result << endl;
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vect::POL);
//             result = result + step;
//             steps ++;
//         }
//         f << steps << ": " << result << endl;
//         f << "After " << steps << " steps, the subject has the following location:\n";
//         f << result << endl;
//         result.pol_mode();
//         f << " or\n" << result << endl;
//         f << "Average outward distance per step = " << result.magVal() / steps << endl;
//         cout << "Write in cha11_1.txt." << endl;
//         steps = 0;
//         result.reset(0.0, 0.0);
//         cout << "Enter target distance (q to quit): ";
//     }
//     cout << "Bye.\n";
//     f.close();
//     cin.clear();
//     while (cin.get() != '\n')
//         continue;
//     return 0;
// }


// 2. main.cpp Vect_2.h Vect_2.cpp
// #include "Vect_2.h"
// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// int main() {
//     using namespace std;
//     using VECTOR::Vect;
//     srand(time(0));
//     double direction;
//     Vect step;
//     Vect result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     cout << "Enter target distance (q to quit): ";
//     while (cin >> target) {
//         cout  << "Enter step length: ";
//         if (!(cin >> dstep))
//             break;

//         while (result.magVal() < target) {
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vect::POL);
//             result = result + step;
//             steps ++;
//         }
//         cout << "After " << steps << " steps, the subject has the following location:\n";
//         cout << result << endl;
//         result.pol_mode();
//         cout << " or\n" << result << endl;
//         cout << "Average outward distance per step = " << result.magVal() / steps << endl;
//         steps = 0;
//         result.reset(0.0, 0.0);
//         cout << "Enter target distance (q to quit): ";
//     }
//     cout << "Bye.\n";
//     cin.clear();
//     while (cin.get() != '\n')
//         continue;
//     return 0;
// }


// 3. main
// #include "Vect.h"
// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// int main() {
//     using namespace std;
//     using VECTOR::Vect;
//     srand(time(0));
//     double direction;
//     Vect step;
//     Vect result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     int N;
//     int stepMin, stepMax;
//     double stepAverage = 0;
//     cout << "Enter times: ";
//     if (!(cin >> N)) {
//         cout << "bad input, program end." << endl;
//         return 0;
//     }

//     for (int i = 0; i < N; ++i) {
//         cout << "Enter target distance: ";
//         cin >> target;
//         cout  << "Enter step length: ";
//         if (!(cin >> dstep))
//             break;

//         while (result.magVal() < target) {
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vect::POL);
//             result = result + step;
//             steps ++;
//         }
//         cout << "After " << steps << " steps, the subject has the following location:\n";
//         cout << result << endl;
//         result.pol_mode();
//         cout << " or\n" << result << endl;
//         cout << "Average outward distance per step = " << result.magVal() / steps << endl;

//         // 统计
//         if (i == 0) {
//             stepMax = steps;
//             stepMin = steps;
//         } else {
//             stepMax = steps > stepMax ? steps : stepMax;
//             stepMin = steps > stepMin ? stepMin : steps;
//         }
//         stepAverage += steps;

//         steps = 0;
//         result.reset(0.0, 0.0);
//     }
//     cout << "Times: " << N << endl;
//     cout << "Max: " << stepMax << ", Min: " << stepMin << ", average: " << stepAverage / N << endl;
//     cout << "Bye.\n";
//     cin.clear();
//     while (cin.get() != '\n')
//         continue;
//     return 0;
// }


// 4. 重新编写Time类示例，使用友元函数来实现所有的运算符重载 main mytime3
// #include "mytime3.h"
// #include <iostream>

// int main() {
//     using namespace std;
//     Time aida(3, 35);
//     Time tosca(2, 48);
//     Time temp;

//     cout << "Aida and Tosca:\n";
//     cout << aida << "; " << tosca << endl;
//     temp = aida + tosca;
//     cout << "Aida + Tosca: " << temp << endl;
//     temp = aida * 1.17;
//     cout << "Aida * 1.17: " << temp << endl;
//     cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

//     return 0;
// }


// 5. main Stonewt.h Stonewt.cpp
// #include "Stonewt.h"
// #include <iostream>

// int main() {
//     using namespace std;
//     Stonewt s1(666.66);
//     Stonewt s2(3, 56.7);
//     Stonewt s3;
//     cout << "s1: " << s1 << endl;
//     cout << "s2: " << s2 << endl;
//     cout << "s3: " << s3 << endl;
//     s2.set_mode(Stonewt::STN);
//     cout << "s2 change mode: " << s2 << endl;
//     cout << "s1+s2: " << s1 + s2 << endl;
//     cout << "s1-s2: " << s1 - s2 << endl;
//     cout << "10*s1: " << 10 * s1 << endl;
//     return 0;
// }


// 6. main Stonewt_2.h/cpp
// #include <iostream>
// #include "Stonewt_2.h"

// int main() {
//     using namespace std;
//     Stonewt arr[6] = {(1000), (2000), (3000)};
//     for (int i = 3; i < 6; ++i) {
//         double Val;
//         cout << "enter pounds val: ";
//         cin >> Val;
//         arr[i] = Stonewt(Val);
//     }

//     Stonewt stand(11, 0);
//     Stonewt mn = arr[0];
//     Stonewt mx = arr[0];
//     int cnt_maxOrequ11 = 0;
//     for (int i = 0; i < 6; ++i) {
//         mn = arr[i] > mn ? mn : arr[i];
//         mx = arr[i] < mx ? mx : arr[i];
//         if (arr[i] >= stand) 
//             cnt_maxOrequ11 ++;
//     }

//     cout << "max and min are: " << endl;
//     mx.show_stn();
//     mn.show_stn();
//     cout << "lagger or equ to 11: " << cnt_maxOrequ11 << endl;
//     return 0;
// }


// 7. main complex0.h/cpp
// #include <iostream>
// using namespace std;
// #include "complex0.h"

// int main() {
//     complex a(3.0, 4.0);
//     complex c;
//     cout << "Enter a complex number (q to quit):\n";
//     while (cin >> c) {
//         cout << "c is " << c << "\n";
//         cout << "complex conjugate is " << ~c << "\n";
//         cout << "a is " << a << '\n';
//         cout << "a + c is " << a + c << '\n';
//         cout << "a - c is " << a - c << '\n';
//         cout << "a * c is " << a * c << '\n';
//         cout << "2 * c is " << 2 * c << '\n';
//         cout << "Enter a complex number (q to quit):\n";
//     }
//     cout << "Done.\n";
//     return 0;
// }