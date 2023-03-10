/*** 7.12 复习题
 * 1. 函数原型，函数定义，函数调用     -----> 定义函数、提供函数、调用函数
 * 2. a. void igor(void); b. float tofu(int); c. double mpg(double n1, double n2); d. long summation(long *, int n);
 * e. double doctor(const char *); f. void ofcourse(boss); g. char * plot(map *); 
 * 3. void change(int ar[], int len, int n){
 *        for (int i=0; i<len; ++i){
 *            ar[i] = n;
 *        }
 *     } 
 * 4. void change(int *start, int *end, int n){
 *        for (int *pt=start; pt!=end; pt++){
 *            *pt = n;
 *        }
 *    }
 * 5. double findMax(const double arr[], int len){
 *        double mx = arr[0];
 *        if (len<1){
 *            cout << "arr size error, will return 0" << endl;
 *            return 0;
 *        }
 *        for (int i=0; i<len; ++i)
 *            if (arr[i] > mx)
 *                mx = arr[i];
 *        return mx;     
 *    }
 * 6. 函数所传参数为形参，即复制所传参数，所以不会改变原始值，原始数据已经得到了保护，不需要加const；但是对于指针，需要使用const来防止指向的原始数据被修改
 * 7. char常量（带双引号的字符串），char数组，char指针（指向字符串第一个字符的指针）
 * 8. int replace(char * str, char c1, char c2){
 *        int cnt = 0;
 *        for (int i=0; str[i]!='\0'; ++i){
 *            if (str[i] == c1){
 *                str[i] = c2;
 *                cnt ++;
 *            }
 *         }
 *         return cnt;
 *    }
 * 9. 'p'；'c'
 * 10. 按值传递：如同基本类型的传递一样，把glize当作一个基本类型进行传递即可；操作简单且能够保护原始数据，但是如果结构太大则消耗大量内存用来存储形参；
 * 按地址传递：传递glize的地址，即传递参数时：函数原型采用 structclass * glize，待传递的结构指针使用 &temp 的形式进行传递；能够节省时间和内存，但是不能够保护原始数据，除非使用const；
 * 11. int judge(const char *);   ----> 注意题目要求：是将函数的地址作为参数：int judge(int (*p)(const char *));
 * 12. a. void show(application);
 *        void show(application temp){
 *            cout << temp.name << endl;
 *            for (int i=0; i<3; ++i){
 *                cout << temp.credit_ratings[i] << endl; 
 *            }
 *        }
 *     b. void show(application *);
 *        void show(application * ps){
 *            cout << ps->name << endl;
 *            for (int i=0; i<3; ++i){
 *                cout << ps->credit_ratings[i] << endl; 
 *            }
 *        }
 * 13. void (*p1)(applicant * a);
 *     const char * (*p2)(const applicant * a1, const applicant * a2);
 *     void (*ap[5])(applicant * a);
 *     typedef const char *(*pa[10])(const applicant * a1, const applicant * a2);    pa temp = f2[10];
 *     上面的不对，题目意思要求是全部的声明都用typedef进行简化
 *     typedef void (*pf1)(applicant * a);
 *     typedef char * (*pf2)(const applicant * a1, const applicant * a2);
 *     pf1 p1 = f1;
 *     pf2 p2 = f2;
 *     pf1 ap[5];
 *     pf2 pa[10];     -----> 将pa声明为一个指针... 前面是把pa当成一个数组进行声明了，修改为后面这样的定义才是指针：pf2 (*pa)[10] (引申出对数组指针和指针数组的思考)
*/

/*** 7.13 编程练习 ***/
// 1.
// #include <iostream>
// double harmonicMean(double x, double y);
// int main(){
//     using namespace std;
//     double x, y;
//     cout << "please enter two numbers: ";
//     cin >> x;
//     cin >> y;
//     while (x!=0 && y!=0){
//         cout << "the result is: " << harmonicMean(x, y) << endl;
//         cout << "this round Done.\n";
//         cout << "please enter two numbers: ";
//         cin >> x;
//         cin >> y;
//     }
//     system("pause");
//     return 0;
// }

// double harmonicMean(double x, double y){
//     return 2.0 * x * y / (x + y);
// }

// 2.
// #include <iostream>
// int input(double * arr);
// void show(const double * arr, int size);
// double meanGrade(const double * arr, int size);
// int main(){
//     using namespace std;
//     double grade[10];
//     int size = input(grade);
//     show(grade, size);
//     double mean = meanGrade(grade, size);
//     cout << "mean grade is: " << mean << endl;
//     system("pause");
//     return 0;
// }
// int input(double * arr){
//     std::cout << "Please input your Grade(number at most:10, any illegal input will lead to quit early): ";
//     int i;
//     for (i=0; i<10; ++i){
//         std::cin >> arr[i];
//         if (std::cin.fail() || arr[i]<0)
//             break;
//     }
//     std::cout << "array size is: " << i << std::endl;
//     return i;
// }

// void show(const double * arr, int size){
//     for (int i=0; i<size; ++i)
//         std::cout << arr[i] << ' ';
//     std::cout << std::endl;
// }

// double meanGrade(const double * arr, int size){
//     double sum = 0.0;
//     for (int i=0; i<size; ++i)
//         sum += arr[i];
//     return sum / size;
// }

// 3.
// #include <iostream>
// struct box
// {
//     /* data */
//     char maker[40];
//     float height;
//     float width;
//     float length;
//     float volume;
// };

// void showBox(box temp);
// void changeVolume(box * temp);

// int main(){
//     using namespace std;
//     box s1 = {"Leejj", 10, 20.5, 30.5};
//     changeVolume(&s1);
//     showBox(s1);
//     system("pause");
//     return 0;
// }

// void showBox(box temp){
//     using namespace std;
//     cout << temp.maker << endl;
//     cout << temp.height << endl;
//     cout << temp.width << endl;
//     cout << temp.length << endl;
//     cout << temp.volume << endl;
// }

// void changeVolume(box * temp){
//     temp->volume = temp->height * temp->length * temp->width;
// }

// 4.
// #include <iostream>
// long double probability(double total, double choice, double specific);
// int main(){
//     using namespace std;
//     double total, choice, specific;
//     cout << "Enter the total number of choices, the the number of picks allowed and the total number of specific choices: \n";
//     while (cin >> total >> choice >> specific && choice <= total){
//         cout << "you have one chance in " << probability(total, choice, specific) << " of winning.\n";
//         cout << "next three number('q' to exit): ";
//     }
//     cout << "Done.\n";
//     system("pause");
//     return 0;
// }

// long double probability(double total, double choice, double specific){
//     long double res = 1.0;
//     for (; choice>0; choice--, total--)
//         res *= total / choice;
//     return specific * res;
// }

// 5.
// #include <iostream>
// long double factorial(int);

// int main(){
//     using namespace std;
//     int n;
//     cout << "please enter an int: ";
//     while (cin >> n ){
//         cout << "the factorial of " << n << " is " << factorial(n) << endl;
//         cout << "please enter another int(enter 'q' to quit): ";
//     }
//     cout << "Done.\n";
//     system("pause");
//     return 0;
// }

// long double factorial(int n){
//     if (n == 1 || n == 2)
//         return n;
//     return factorial(n-1) * n;
// }

// 6.
// #include <iostream>
// const int ArrMaxSize = 10;
// int Fill_array(double * arr, int size);
// void Show_array(const double * arr, int size);
// void Reverse_array(double * arr, int size); 

// int main(){
//     using namespace std;
//     double arr[ArrMaxSize];
//     int size = Fill_array(arr, ArrMaxSize);
//     Show_array(arr, size);
//     Reverse_array(arr, size);
//     Show_array(arr, size);
//     Reverse_array(arr, size);
//     Reverse_array(arr+1, size-2);
//     Show_array(arr, size);
//     system("pause");
//     return 0;
// }

// int Fill_array(double * arr, int size){
//     using namespace std;
//     cout << "please enter some double number(if you enter a alpha, it will quit early): \n";
//     int i;
//     for(i=0; i<size; ++i){
//         cin >> arr[i];
//         if (cin.fail()){
//             cout << "Opps, you give a wrong enter, the input will stop.\n";
//             break;
//         }
//     }
//     return i;
// }

// void Show_array(const double * arr, int size){
//     using namespace std;
//     for (int i=0; i<size; ++i)
//         cout << arr[i] << ' ';
//     cout << endl;
// }

// void Reverse_array(double * arr, int size){
//     int left = 0;
//     int right = size - 1;
//     while (left <= right){
//         int temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp; 
//         left ++;
//         right --;
//     }
// }

// 7.
// #include <iostream>
// const int Max = 5;
// double * fill_array(double ar[], int limit);
// void show_array(const double ar[], double * end); 
// void revalue(double r, double ar[], double * end);

// int main(){
//     using namespace std;
//     double properties[Max];
//     double * end = fill_array(properties, Max);
//     show_array(properties, end);
//     if (end != properties){
//         cout << "Enter revaluation factor: ";
//         double factor;
//         while (!(cin >> factor)){
//             cin.clear();
//             while (cin.get() != '\n')
//                 continue;
//             cout << "Bad input; Please enter a number: ";
//         }
//         revalue(factor, properties, end);
//         show_array(properties, end);
//     }
//     cout << "Done.\n";
//     cin.get();
//     system("pause");
//     return 0;
// }

// double * fill_array(double ar[], int limit){
//     using namespace std;
//     double temp;
//     double * end;
//     int i;
//     for (i=0, end=ar; i<limit; end++, i++){
//         cout << "Enter value #" << i+1 << ": ";
//         cin >> temp;
//         if (!cin){
//             cin.clear();
//             while (cin.get() != '\n')
//                 continue;
//             cout << "Bad input, input processing terminated.\n";
//             break;
//         }
//         else if (temp < 0)
//             break;
//         ar[i] = temp;
//     }
//     return end;
// }

// void show_array(const double ar[], double * end){
//     using namespace std;
//     int i = 0;
//     while (ar != end){
//         cout << "Property #" << i+1 << ": $";
//         cout << *ar << endl;
//         ar++;
//         i++;
//     }
// }

// void revalue(double r, double ar[], double * end){
//     while (ar != end){
//         *ar *= r;
//         ar++;
//     }
// }

// 8.a
// #include <iostream>
// const int SEASONS = 4;
// const char Snames[SEASONS][10] = {"Spring", "Summer", "Fall", "Winter"};
// void fill(double * ar);
// void show(const double * ar);
// int main(){
//     using namespace std;
//     double expenses[SEASONS];
//     fill(expenses);
//     show(expenses);
//     system("pause");
//     return 0;
// }

// void fill(double * ar){
//     using namespace std;
//     for (int i=0; i<SEASONS; ++i){
//         cout << "Enter " << Snames[i] << " expenses: ";
//         cin >> ar[i];
//     }
// }

// void show(const double * ar){
//     using namespace std;
//     double total = 0.0;
//     cout << "\nEXPENSES\n";
//     for (int i=0; i<SEASONS; ++i){
//         cout << Snames[i] << ": $" << ar[i] << endl;
//         total += ar[i];
//     }
//     cout << "total: $" << total << endl;
// }

// 8.b
// #include <iostream>
// const int SEASONS = 4;
// struct expenses
// {
//     /* data */
//     double money[SEASONS];
// };

// const char Snames[SEASONS][10] = {"Spring", "Summer", "Fall", "Winter"};
// void fill(expenses * ar);
// void show(expenses ar);
// int main(){
//     using namespace std;
//     expenses ar;
//     fill(&ar);
//     show(ar);
//     system("pause");
//     return 0;
// }

// void fill(expenses * ar){
//     using namespace std;
//     for (int i=0; i<SEASONS; ++i){
//         cout << "Enter " << Snames[i] << " expenses: ";
//         cin >> ar->money[i];
//     }
// }

// void show(expenses ar){
//     using namespace std;
//     double total = 0.0;
//     cout << "\nEXPENSES\n";
//     for (int i=0; i<SEASONS; ++i){
//         cout << Snames[i] << ": $" << ar.money[i] << endl;
//         total += ar.money[i];
//     }
//     cout << "total: $" << total << endl;
// }

// 9.
// #include <iostream>
// #include <cstring>
// using namespace std;
// const int SLEN = 30;
// struct student
// {
//     /* data */
//     char fullname[SLEN];
//     char hobby[SLEN];
//     int ooplevel;
// };

// int getinfo(student pa[], int n);
// void display1(student st);
// void display2(const student * ps);
// void display3(const student pa[], int n);

// int main(){
//     cout << "Enter class size: ";
//     int class_size;
//     cin >> class_size;
//     while (cin.get() != '\n')
//         continue;
    
//     student * ptr_stu = new student[class_size];
//     int entered = getinfo(ptr_stu, class_size);
//     for (int i=0; i<entered; ++i){
//         display1(ptr_stu[i]);
//         display2(&ptr_stu[i]);
//     }
//     display3(ptr_stu, entered);
//     delete [] ptr_stu;
//     cout << "Done.\n";
//     system("pause");
//     return 0;
// }

// int getinfo(student pa[], int n){
//     int i;
//     for (i=0; i<n; ++i){
//         cout << "Please enter a new student information: " << endl;
//         cout << "enter name: ";
//         char tempName[SLEN];
//         cin.getline(tempName, SLEN);
//         if (tempName[0] == '\0')
//             break;
//         strcpy(pa[i].fullname, tempName);
//         cout << "enter hobby: ";
//         cin.getline(pa[i].hobby, SLEN);
//         cout << "enter ooplevel: ";
//         cin >> pa[i].ooplevel;
//         cin.get();
//     }
//     return i;
// }

// void display1(student st){
//     cout << "show1 name: " << st.fullname << endl;
//     cout << "show1 hobby: " << st.hobby << endl;
//     cout << "show1 ooplevel: " << st.ooplevel << endl;
// }

// void display2(const student * ps){
//     cout << "show2 name: " << ps->fullname << endl;
//     cout << "show2 hobby: " << ps->hobby << endl;
//     cout << "show2 ooplevel: " << ps->ooplevel << endl;
// }

// void display3(const student pa[], int n){
//     for (int i=0; i<n; ++i)
//         cout << "show3 name: " << pa[i].fullname << " show3 hobby: " << pa[i].hobby << " show3 ooplevel: " << pa[i].ooplevel << endl;
// }

// 10.
// #include <iostream>

// typedef double (*pfunc)(double x, double y);
// double add(double x, double y);
// double multi(double x, double y);
// double calculate(double n1, double n2, pfunc);

// int main(){
//     using namespace std;
//     double x, y;
//     pfunc func[2] = {add, multi};
//     cout << "Enter two number to calculate, enter 'q' to quit: " << endl;
//     while (cin >> x >> y){     
//         cout << "add: " << calculate(x, y, func[0]) << endl;
//         cout << "multi: " << calculate(x, y, func[1]) << endl;
//         cout << "Enter two number to calculate, enter 'q' to quit: " << endl;
//     }
//     system("pause");
//     return 0;
// }

// double add(double x, double y){
//     return x + y;
// }

// double multi(double x, double y){
//     return x * y;
// }

// double calculate(double n1, double n2, pfunc func){
//     return func(n1, n2);
// }
