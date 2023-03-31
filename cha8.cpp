/*** 8.7 复习题
 * 1. 很短的函数QWQ   ---> 只有一行代码的小型、非递归函数适合作为内联函数
 * 2. a. void song(const char * name, int times=1);
 *    b. 函数定义不需要任何改变
 *    c. void song(const char * name="O.My Papa", int times=1);
 * 3. void iquote(int content){
 *       cout << "\"" << content << "\"" << endl;
 *    }
 *    void iquote(double content){
 *       cout << "\"" << content << "\"" << endl;
 *    }
 *    void iquote(string content){
 *       cout << "\"" << content << "\"" << endl;
 *    }
 * 4. a. void showBox(box & input){
 *          cout << input.maker << ' ' << input.height << ' ' << input.width << ' ' << input.length << ' ' << input.volume << endl;
 *       }
 *    b. void setVolume(box & input){
 *          input.volume = input.height * input.width * input.length;
 *       }
 * 5. 数组传递可以用引用吗？这里我不会了
 *    ------> 这里就正常用就行了，array是类不是数组，就跟使用结构一样对array进行传递，在函数内部就跟使用数组一样对array进行使用；
 * 
 * 
 * 6. a. double mass(double density, double volume=1.0);
 *    b. void repeat(const char * sentence, int n=5);
 *    c. int average(int a, int b);
 *       double average(double a, double b);
 *    d. char mangle(char input);
 *       char * mangle(char * input);
 * 7. template <typename T>
 *    T findMax(T a, T b){
 *       return a < b ? b : a;
 *    }
 * 8. template <> box findMax<box>(box & b1, box & b2){
 *       return b1.volume < b2.volume ? b2 : b1;
 *    }
 * 9. float, float, float, int, float    ---> 最后一个是double：因为2.0是double？
*/

/*** 8.8 编程练习 ***/
// 1. 读不懂题目到底是啥意思
// #include <iostream>

// int main(){
//     using namespace std;

//     system("pause");
//     return 0;
// }

// 2.
// #include <iostream>

// struct CandyBar{
//     char * name;
//     double weight;
//     int heat;
// };


// void setCandyBar(CandyBar & c, char * name=(char*)"Millennium Munch", double weight=2.85, int heat=350);
// void showCandyBar(const CandyBar & c);

// int main(){
//     using namespace std;
//     CandyBar c1, c2;
//     setCandyBar(c1);
//     showCandyBar(c1);
//     char name[50] = "Leejj shit";
//     setCandyBar(c2, name, 200.3, 60);
//     showCandyBar(c2);
//     system("pause");
//     return 0;
// }

// void setCandyBar(CandyBar & c, char * name, double weight, int heat){
//     c.name = name;
//     c.weight = weight;
//     c.heat = heat;
// }

// void showCandyBar(const CandyBar & c){
//     using namespace std;
//     cout << "name: " << c.name << " weight: " << c.weight << " heat: " << c.heat << endl;
// }

// 3.
// #include <iostream>
// #include <string>
// using namespace std;

// void stringUpper(string & str);

// int main(){
//     string text;
//     cout << "Enter a string (q to quit): ";
//     getline(cin, text);
//     while (text != "q"){
//         stringUpper(text);
//         cout << text << endl;
        
//         cout << "Next string (q to quit): ";
//         getline(cin, text);
//     }    
//     cout << "Bye.\n";
//     system("pause");
//     return 0;
// }

// void stringUpper(string & str){
//     for (int i=0; i<str.size(); ++i)
//         str[i] = toupper(str[i]);
// }

// 4.
// #include <iostream>
// using namespace std; 
// #include <cstring>// for strlen(),strcpy() 

// struct stringy{
//     char * str;     // points to a string 
//     int ct;       // length of string (not counting'\0') };
// };

// // prototypes for set(), show(), and show() go here 
// void show(const stringy & temp, int n=1);
// void show(const char * temp, int n=1);
// void set(stringy & temp, const char * string);

// int main(){
//     stringy beany;
//     char testing[] = "Reality isn't what it used to be.";
//     set(beany,testing); // first argument is a reference, // allocates space to hold copy of testing, // sets str member of beany to point to the // new block,copies testing to new block, // and sets ct member of beany
//     show(beany);  // prints member string once 
//     show(beany,2); // prints member string twice 
//     testing[0]='D';
//     testing[1]='u'; 
//     show(testing); // prints testing string once 
//     show(testing,3);// prints testing string thrice 
//     show("Done!");
//     system("pause");
//     return 0; 
// }

// void show(const stringy & temp, int n){
//     for (int i=0; i<n; ++i)
//         cout << temp.str << endl;
// }

// void show(const char * temp, int n){
//     for (int i=0; i<n; ++i)
//         cout << temp << endl;
// }

// void set(stringy & temp, const char * string){
//     temp.ct = strlen(string);
//     temp.str = new char[temp.ct];
//     strcpy(temp.str, string);
// }

// 5.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// template <typename T> T max5(const T * arr);

// int main(){
//     int arr_int[5] = {-1, 2, 5, 4, 1};
//     double arr_double[5] = {-5.3, 5.3, 2.3, 6.8, 8.9};
//     cout << max5(arr_int) << endl;
//     cout << max5(arr_double) << endl;
//     system("pause");
//     return 0;
// }

// template <typename T> T max5(const T * arr){
//     return (*max_element(arr, arr+5));
// }

// 6.
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// template <typename T> T maxn(T * arr, int len);
// template <> char * maxn(char * arr[], int len);

// int main(){

//     // 隐式实例化，显示实例化，显示具体化
//     // template <typename T> T maxn(const T * arr, int len);
//     // template int maxn<int>(const int * arr, int len);
//     // template <> int maxn<int>(const int * arr, int len);

//     int arr1[6] = {5, 3, 5, 9, 6, 11};
//     double arr2[4] = {5.2, 3.1, 2.8, 4.8};
//     char const * arr3[5] = {
//         "abcde",
//         "abcdef",
//         "abc",
//         "ab",
//         "abcdefg"
//     };
//     cout << "arr1 max num : " << maxn(arr1, 6) << endl;
//     cout << "arr2 max num : " << maxn(arr2, 4) << endl;
//     cout << "arr3 max len : " << maxn(arr3, 5) << endl;

//     system("pause");
//     return 0;
// }

// template <typename T> T maxn(T * arr, int len){
//     return (*max_element(arr, arr+len));
// }

// template <> char * maxn(char * arr[], int len){
//     int maxLen = 0;
//     char * res = NULL;
//     for (int i=0; i<len; ++i){
//         if (maxLen < strlen(arr[i])){
//             maxLen = strlen(arr[i]);
//             res = arr[i];
//         }
//     }
//     return res;
// }


// 7.
// #include <iostream>
// using namespace std;

// template <typename T> void ShowArray(T arr[], int n);
// template <typename T> void ShowArray(T * arr[], int n);
// template <typename T> T SumArray(T * arr, int n);
// template <typename T> T SumArray(T * arr[], int n);

// struct debts
// {
//     /* data */
//     char name[50];
//     double amount;
// };

// int main(){
//     using namespace std;

//     int things[6] = {13, 31, 103, 301, 310, 130};
//     struct debts mr_E[3] = 
//     {
//         {"Ima Worfe", 2400.0},
//         {"Ura Foxe", 1300.0},
//         {"Iby Stout", 1800.0}
//     };
//     double * pd[3];

//     for (int i=0; i<3; ++i)
//         pd[i] = &mr_E[i].amount;
//     cout << "Listing Mr. E's counts of things:\n";
//     ShowArray(things, 6);
//     cout << "Sum of this: " << SumArray(things, 6) << endl;
//     cout << "Listing Mr. E's debts:\n";
//     ShowArray(pd, 3);
//     cout << "Sum of this: " << SumArray(pd, 3) << endl;

//     system("pause");
//     return 0;
// }

// template <typename T> void ShowArray(T arr[], int n){
//     using namespace std;
//     cout << "template A\n";
//     for (int i=0; i<n; ++i)
//         cout << arr[i] << ' ';
//     cout << endl;
// }

// template <typename T> void ShowArray(T * arr[], int n){
//     using namespace std;
//     cout << "template B\n";
//     for (int i=0; i<n; ++i)
//         cout << *arr[i] << ' ';
//     cout << endl;
// }

// template <typename T> T SumArray(T * arr, int n){
//     cout << "template A\n";
//     T sum_arr = 0;
//     for (int i=0; i<n; ++i)
//         sum_arr += arr[i];
//     return sum_arr;
// }

// template <typename T> T SumArray(T * arr[], int n){
//     cout << "template B\n";
//     T sum_arr = 0;
//     for (int i=0; i<n; ++i)
//         sum_arr += *arr[i];
//     return sum_arr;
// }