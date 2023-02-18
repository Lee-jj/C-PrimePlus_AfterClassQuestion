/*** 5.8 复习题
1. 入口条件循环是在循环开始之前判断循环条件是否满足，
   出口条件循环是先进行一次循环，在循环结束时判断循环条件是否满足；
   C++中，入口条件循环有for， while， 出口条件循环有do while
2. 输出0 1 2 3 4，且每输出一个数字后会换行
3. 输出0 0 3 3 6 6 9 9，且每输出一个数字后会换行    -----> 0 3 6 9 换行 12
4. 输出6 8，且每输出一个数字后会换行
5. k = 8
6. #include<iostream>
   int main(){
       using namespace std;
       for (int i=1; i < 65; i*=2)
         cout << i << endl;
       system("pause");
       return 0;
   }
7. 用{}括起来
8. 第一句无效，第二句有效，将1024赋值给y      -----> 第一句中1,024为逗号表达式，表示右侧的值，024是八进制，对应十进制的20，所以x=20；第二句逗号运算符的优先级低于赋值运算符，其等价于(int y=1),024;
9. 在查看输入方面三者好像没什么不同的         -----> cin >> ch 会跳过空格，换行符和制表符，而其他两种格式会保留这些
***/

/*** 5.9 编程练习 ***/
// 1.
// #include <iostream>
// int main(){
//     using namespace std;
//     int startNum, endNum;
//     cout << "Please enter start num: ";
//     cin >> startNum;
//     cout << "Please enter end num: ";
//     cin >> endNum;
//     int sumNum = 0;
//     for (int i = startNum; i < endNum+1; ++i)
//         sumNum += i;
//     cout << "sum is: " << sumNum << endl;
//     system("pause");
//     return 0;
// }

// 2.
// #include <iostream>
// #include <array>
// const int Arsize = 16;
// int main(){
//     using namespace std;
//     array<long double, Arsize> factorials;
//     factorials[0] = factorials[1] = 1.0;
//     for (int i = 2; i < Arsize; i++)
//        factorials[i] = i * factorials[i-1];
//     for (int i = 0; i < Arsize; ++i)
//        cout << i << "! = " << factorials[i] << endl;
//     // 计算100！的值，数据太大溢出了，怎么解决？？       -----> 把每一位存到数组或者字符串中？
//     long long res = 1;
// 	long long i;
// 	for (i = 1; i < 101; i++){
// 		// cout << i << endl;
// 		res *= i;
// 		cout << res << endl;
// 	}
// 	cout << "100! = " << res << endl;
//     system("pause");
//     return 0;
// }

// 3. 
// #include <iostream>
// int main(){
//     using namespace std;
// 	double input;
// 	double sumNum = 0;
// 	do{
// 		cout << "Please enter a number(if you want to stop, please enter 0): ";
// 		cin >> input;
// 		sumNum += input;
// 	}while (input != 0);
// 	cout << "the sum is: " << sumNum << endl;
// 	system("pause");
// 	return 0;
// }

// 4.
// #include <iostream>
// int main(){
// 	using namespace std;
// 	double moneyDaphne = 100;
// 	double moneyCleo = 100;
// 	int year;
// 	for (year = 1; moneyDaphne >= moneyCleo; year++){
// 		moneyDaphne += 10.0;
// 		moneyCleo *= 1.05;
// 	}
// 	cout << "year: " << year-1 << endl;
// 	cout << "Daphne: " << moneyDaphne << endl;
// 	cout << "Cleo: " << moneyCleo << endl;
// 	// cout << bool(moneyDaphne < moneyCleo);
// 	system("pause");
// 	return 0;
// }

// 5.
// #include <iostream>
// #include <string>
// #include <numeric>
// const int MONTHNUM = 12;
// int main(){
// 	using namespace std;
// 	string month[MONTHNUM] = {"January", "February", "March", "April", "May", "June", 
// 								"July", "August", "September", "October", "November", "December"};
// 	int bookNum[MONTHNUM];
// 	for (int i = 0; i < MONTHNUM; ++i){
// 		cout << "Please enter the number of books you sell on " << month[i] << ": ";
// 		cin >> bookNum[i];
// 	}
// 	cout << "the sum of books of this year is: " << accumulate(bookNum, bookNum+MONTHNUM, 0) << endl;
// 	system("pause");
// 	return 0;
// }

// 6.
// #include <iostream>
// #include <string>
// const int MONTHNUM = 12;
// const int YEARNUM = 3;
// int main(){
// 	using namespace std;
// 	string month[MONTHNUM] = {"January", "February", "March", "April", "May", "June", 
// 								"July", "August", "September", "October", "November", "December"};
// 	string year[YEARNUM] = {"first", "second", "third"};
// 	int bookNum[YEARNUM][MONTHNUM];
// 	int bookSum = 0;
// 	for (int i = 0; i < YEARNUM; ++i){
// 		for (int j = 0; j < MONTHNUM; ++j){
// 			cout << "Please enter the number of books you sell on " << month[j] << " of the " << year[i] << " year: ";
// 			cin >> bookNum[i][j];
// 			bookSum += bookNum[i][j];
// 		}
// 	}
// 	cout << "total number is: " << bookSum << endl;
// 	system("pause");
// 	return 0;
// }

// 7.
// #include <iostream>
// #include <string>
// struct car
// {
// 	/* data */
// 	std::string manufacturer;
// 	int year;
// };

// int main(){
// 	using namespace std;
// 	int checkNum;
// 	cout << "How many cars do you wish to catalog?";
// 	(cin >> checkNum).get();                         // -----> 这里的方法很重要，适用于数值和字符串交替输入的情况，*直接用cin时换行符还在缓冲区*
// 	car * p_car = new car[checkNum];
// 	for (int i = 0; i < checkNum; ++i){
// 		cout << "Car #" << i+1 << ":\n";
// 		cout << "Please enter the make: ";
// 		// cin >> p_car[i].manufacturer;
// 		getline(cin, p_car[i].manufacturer);
// 		cout << "Please enter the year made: ";
// 		(cin >> p_car[i].year).get();
// 	}
// 	cout << "Here is your collection:" << endl;
// 	for (int i = 0; i < checkNum; ++i)
// 		cout << p_car[i].year << " " << p_car[i].manufacturer << endl;
// 	delete [] p_car;
// 	system("pause");
// 	return 0;
// }

// 8.
// #include <iostream>
// #include <cstring>
// const int LENGHT = 30;
// int main(){
// 	using namespace std;
// 	char word[LENGHT];
// 	int cnt = 0;
// 	cout << "enter words (to stop, type the word done):";
// 	do{
// 		cin >> word;
// 		cnt += 1;
// 	}while (strcmp(word, "done"));
// 	cout << "you enter a total of 7 woeds." << endl;
// 	system("pause");
// 	return 0;
// }

// 9.
// #include <iostream>
// #include <string>
// int main(){
// 	using namespace std;
// 	string word;
// 	int cnt = 0;
// 	cout << "enter words (to stop, type the word done):";
// 	do{
// 		cin >> word;
// 		cnt += 1;
// 	}while (word != "done");
// 	cout << "you enter a total of 7 woeds." << endl;
// 	system("pause");
// 	return 0;
// }

// 10.
// #include <iostream>
// #include <string>
// int main(){
// 	using namespace std;
// 	int num;
// 	cout << "enter number of rows:";
// 	cin >> num;
// 	for (int i = 0; i < num; ++i){
// 		string dot = "";
// 		string multi = "";
// 		dot.append(num-i-1, '.');
// 		multi.append(i+1, '*');
// 		cout << dot + multi << endl;
// 	}
// 	system("pause");
// 	return 0;
// }