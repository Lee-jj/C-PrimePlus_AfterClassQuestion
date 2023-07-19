/*** 10.9 复习题
 * 1. 什么是类？ class
 * 2. （抽象）；
 *    （封装）将成员变量的声明和定义分文件编写；
 *    （数据隐藏）将数据放在private中，将实现方法放在public中，使得在类内可以随意访问成员变量和成员函数而在类外只能通过成员函数访问成员变量；
 * 3. 对象是类的实体
 * 4. 类函数一般在类外可以通过对象进行访问，而类数据为了实现数据隐藏一般不能通过对象进行访问而只能在类内进行访问
 * 5. class Bank{
 *  private:
 *      string name_;
 *      string account_;
 *      double money_;
 *  public:
 *      Bank();
 *      Bank(const string name, const string account, double money);
 *      show() const;
 *      deposit(int money);
 *      takeOut(int money);
 * };
 * 6. 类构造函数在类进行初始化的时候被调用；类析构函数在对象被清除的时候被调用
 * 7. 见编程练习1的具体实现
 * 8. 默认构造函数是编译器自动生成的构造函数，在没有进行任何构造函数的定义时将被自动调用；
 *    好处：不知道有啥好处
 * 9. ？数据成员有多个，怎么返回各个数据成员值
 * 10. this是指向调用对象的地址， *this是该调用对象的别名
*/

/*** 10.10 编程练习*/
// 1. main(), 头文件cha10_Bank.h，源文件cha10_Bank.cpp
// #include <iostream>
// #include "cha10_Bank.h"

// int main() {
//     using namespace std;
//     Bank b1;
//     Bank b2 = {"leejj", "1422764103", 99999999.99};
//     cout << "b1 show:" << endl;
//     b1.show();
//     cout << "b2 show:" << endl;
//     b2.show();
//     b1 = Bank("who", "0001", 1024.2);
//     cout << "now b1 show:" << endl;
//     b1.show();
//     if (b1.deposit(300))
//         cout << "done!" << endl;
//     if (b1.takeOut(300))
//         cout << "get!" << endl;
//     b1.takeOut(10000);
//     return 0;
// }

// 2. main(), cha10_Person.h, cha10_Person.cpp
// #include "cha10_Person.h"

// int main() {
//     Person one;
//     Person two("Smythecraft");
//     Person three("Dimwiddy", "Sam");
//     one.Show();
//     one.FormalShow();
//     two.Show();
//     two.FormalShow();
//     three.Show();
//     three.FormalShow();
//     return 0;
// }

// 3. 改写9.1 main(), cha10_Golf.h, cha10_Golf.cpp
// #include "cha10_Golf.h"
// #include <iostream>

// int main() {
//     using namespace std;
//     Golf ann("Ann Birdfree", 24), andy, arrGolf[3];
//     ann.showgolf();

//     andy.showgolf();
//     andy.setgolf();
//     andy.showgolf();
//     andy.handicap(20);
//     andy.showgolf();

//     int i = 0;
//     while (i < 3 && arrGolf[i].setgolf()) {
//         arrGolf[i].showgolf();
//         i ++;
//         if (i < 3) 
//             cout << "next one: " << endl;
//     }
//     return 0;
// }

// 4. main(), cha10_Sales.h, cha10_Sales.cpp
// #include "cha10_Sales.h"
// #include <iostream>

// int main() {
//     using namespace SALES;
//     double ar[3] = {1.0, 2.0, 3.0};
//     Sales s1;
//     Sales s2(ar, 3);
//     s1.showSales();
//     s2.showSales();
//     return 0;
// }


// 5. main(), cha10_Stack.h, cha10_Stack.cpp
// #include "cha10_Stack.h"
// #include <iostream>

// int main() {
//     using namespace std;
//     Stack st;
//     custmoer cu;
//     char ch;
//     cout << "Press a to add a customer, P to process an order, and Q to exit." << endl;
//     while (cin >> ch && toupper(ch) != 'Q') {
//         while (cin.get() != '\n')
//             continue;
//         if (!isalpha(ch)) {
//             cout << '\a';
//             continue;
//         }
//         switch (ch) {
//         case 'a':
//         case 'A':
//             if (st.isfull())
//                 cout << "10 customers have been filled." << endl;
//             else {
//                 cout << "Add customer name: ";
//                 cin.getline(cu.fullname, 35);
//                 cout << "add customer payment: ";
//                 cin >> cu.payment;
//                 cout << "dssd: " << st.push(cu) << endl;
//             } 
//             break;
//         case 'p':
//         case 'P':
//             if (st.isempty()) 
//                 cout << "empty." << endl;
//             else 
//                 st.pop(cu);
//             break;
//         default:
//             cout << "input error." << endl;
//             break;
//         }
//         cout << "Press a to add a customer, P to process an order, and Q to exit." << endl;
//     }
//     return 0;
// }


// 6. main(), cha10_Move.h, cha10_Move.cpp
// #include "cha10_Move.h"

// int main() {
//     using namespace std;
//     Move m1, m2(3.3, 6.6);
//     m1.showMove();
//     m2.showMove();
//     m1.reset(1, 1);
//     m1.showMove();
//     m1.add(m2).showMove();
//     return 0;
// }

// 7. main(), cha10_Plorga.h, cha10_Plorga.cpp
// #include "cha10_Plorga.h"

// int main() {
//     Plorga p1, p2("leechee", 20000);
//     p1.show();
//     p2.show();
//     p1.setCI(999999);
//     p1.show();
//     return 0;
// }

// 8.
