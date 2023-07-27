/*** 11.8 复习题
 * 1. 使用成员函数重载乘法运算符：
 * Stonewt Stonewt::operator*(double k) const {      
 *      return Stonewt(st * k + lb * k / 14, lb * k % 14);
 * }
 * 2. 友元函数在类外定义，但是可以访问类成员
 * 3. 不是。非成员函数可以访问类内的公有类成员
 * 4. friend Stonewt operator*(const Stonewt & temp, double k) const {
 *      return temp * k;
 * }
 * 5. == 哪些运算符不能重载？==
 * 6. 重载这些运算符只能用类成员函数吗？
 * 7. operator double(Vector & temp) {
 *      return temp.length;
 * }
*/

/*** 11.9 编程练习*/
// 1. 修改程序清单11.15 main() vect.h vect.cpp
#include "Vect.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    
}
