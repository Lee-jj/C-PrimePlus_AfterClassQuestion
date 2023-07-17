/*** 9.5 复习题
 * 1. a. 自动存储 b. 静态存储，外部链接性 c. 静态存储，内部链接性 d. 静态存储，内部链接性 --> 本地静态变量
 * 2. using声明导入指定的名称空间中的变量，using编译指令导入全部的名称空间的定义 --> using声明：命名空间中的单个名称可用， using编译指令：命名空间中的全部名称可用
 * 3. cout -> std::cout, cin -> std::cin
 * 4. using namespace std -> using std::cout using std::cin using std::endl
 * 5. 可能是在同一个程序的另一个文件中，average函数被重新定义，并隐藏了原来的int类型的average函数 --> 在每个文件中使用静态函数定义，或者在每个文件中都在未命名空间中定义一个合适的average函数
 * 6. 10（换行）4（换行）0（换行）Other: 10,1（换行）another():10, -4（换行）
 * 7. 1（换行）4，1，2（换行）2（换行）2（换行）4，1，2（换行）2
*/

/*** 9.6 编程练习*/
// 1. main函数, 其他文件见文件名描述
// #include "cha9_1golf.h"
// #include <iostream>

// int main() {
//     using namespace std;
//     int len = 10;
//     golf people[len];
//     for (int i = 0; i < len; ++i) {
//         if (! setgolf(people[i]))
//             break;
//         showgolf(people[i]);
//         handicap(people[i], 10086);
//         showgolf(people[i]);
//     }
//     return 0;
// }


// 2. 修改程序清单9.9，用string代替字符数组 p 334 -> 356
// #include <iostream>
// #include <string>

// void strcount(const std::string str);

// int main() {
//     using namespace std;
//     string input;
//     cout << "Enter a line:\n";
//     getline(cin, input);
//     while (!input.empty()) {
//         strcount(input);
//         cout << "Enter next line (empty line to quit):\n";
//         getline(cin, input);
//     }
//     cout << "Bye.\n";
//     return 0;
// }

// void strcount(const std::string str) {
//     using namespace std;
//     static int total = 0;
//     int count = 0;

//     cout << "\"" << str << "\" contains ";
//     count = str.length();
//     total += count;
//     cout << count << " characters\n";
//     cout << total << " characters total.\n";
// }


// 3.
// #include <iostream>
// #include <string.h>
// #include <new> // for placement new

// const int BUF = 512;
// char buffer[BUF];

// struct chaff {
//     char dross[20];
//     int slag;
// };

// int main() {
//     using namespace std;
//     chaff * pd1 = new (buffer) chaff[2]; // placement new  in buffer
//     chaff * pd2 = new chaff[2]; // in heap
//     for (int i = 0; i < 2; ++i) {
//         strcpy(pd1[i].dross, "str_for_pd1");
//         pd1[i].slag = i + 1;
//         strcpy(pd2[i].dross, "str_for_pd2");
//         pd2[i].slag = i + 2;
//     }
//     cout << "address of pd1: " << &pd1[0] << endl;
//     cout << "address of pd2: " << &pd2[0] << endl;
//     for (int i = 0; i< 2; ++i) {
//         cout << "time " << i << endl;
//         cout << pd1[i].dross << " " << pd1[i].slag << endl;
//         cout << pd2[i].dross << " " << pd2[i].slag << endl;
//     }
//     return 0;
// }


// 4. main.cpp 其他文件见文件名描述
// #include "cha9_4.h"
// #include <iostream>

// int main() {
//     double ar[3] = {1.0, 2.0, 3.0};
//     SALES::Sales s1, s2;
//     SALES::setSales(s1);
//     SALES::setSales(s2, ar, 3);
//     std::cout << "Show the values: " << std::endl;
//     SALES::showSales(s1);
//     SALES::showSales(s2);
//     return 0;
// }