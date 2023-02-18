// 4.12 复习题
// 1. a)char actor[30]; b)short besite[100] c)float chuck[13] d)long double dipsea[64];
// 2. #include <array>  a)array<char, 30> actor; b)array<short, 100> besite; c)array<float, 13> chuck; d)array<long double, 64> dipsea;
// 3. int temp[5] = {1, 3, 5, 7. 9};
// 4. int even = temp[0] + temp[4];
// 5. cout << ideas[1] << endl;
// 6. char temp[] = "cheeseburger";
// 7. #include <string> string temp = "Waldorf Salad";
// 8. struct fish{
        // char fishClass[30];
        // int weight;
        // double length;
    // };
// 9. fish myFish;
    //fish.fishClass = "xxx";
    //fish.weight = 2;
    //fish.length = 3.0;   
// 10. enum Response = {1, 0, 2};   --->   enum Response = {No, Yes, Maybe};
// 11. double * p1 = &ted;
// 12. float * p1 = treacle[0];   --->   float * p = treacle;
    // cout << &p1 << endl;    --->      cout << * p << endl;
    // cout << &(p1 + 9) << endl;   ---> cout << * (p+9) << endl;
// 13. a)  int inPut; 
        // cin >> inPut;
        // int * p1 = new int[inPut];
    // b) #include <vector>
    //    int inPut;
    //    cin >> inPut;
    //    vector<int> arr(inPut);
// 14. 一串地址
// 15. fish * p1 = new fish;   --->   fish yu = new fish{xiaoyu, 10, 20.5};    ???
//     cout << p1->fishClass << p1->weght << p1.length << endl;
// 16. 底下的不能存储空格
// 17. #include <iostream> #include <string> #include <vector> #include <array>
//     const int num = 10;
//     std::vector<std::string> vstr(num);
//     std::array<std::string, num> astr;


// 第四章 编程练习
// 4.1
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
    
//     string firstName;
//     string lastName;
//     char grade;
//     int age;
//     cout << "What is your first name? ";
//     getline(cin, firstName);
//     cout << "What is your last name? ";
//     cin >> lastName;
//     cout << "What letter grade do you deserve? ";
//     cin >> grade;
//     cout << "what is your age? ";
//     cin >> age;

//     cout << "Name: " << lastName << ", " << firstName << endl;
//     cout << "Grade: " << char(grade+1) << endl;
//     cout << "age: " << age << endl;
    
//     system("pause");
//     return 0;
// }

// 4.2
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
//     string name;
//     string dessert;
//     cout << "Enter your name:" << endl;
//     getline(cin, name);
//     cout << "Enter your favorite dessert:" << endl;
//     getline(cin, dessert);
//     cout << "I have some delicious " << dessert << " for you, " << name << ".\n"; 
//     system("pause");
//     return 0;
// }

// 4.3
// #include <iostream>
// #include <cstring>

// int main(){
//     using namespace std;
//     char firstName[10];
//     char lastName[20];
//     cout << "Enter your first name: ";
//     cin >> firstName;
//     cout << "Enter your last name: ";
//     cin >> lastName;

//     char temp[20] = ", ";
//     strcat(temp, firstName);
//     strcat(lastName, temp);

//     cout << "Here's the information in a single string: " << lastName << endl;
//     system("pause");
//     return 0;
// }

//  4.4
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
//     string firstName;
//     string lastName;
//     cout << "Enter your first name: ";
//     cin >> firstName;
//     cout << "Enter your last name: ";
//     cin >> lastName;
//     string merge = lastName + ", " + firstName;
//     cout << "Here's the information in a single string: " << merge << endl;
//     system("pause");
//     return 0;
// }

// 4.5
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
//     struct CandyBar
//     {
//         /* data */
//         string name;
//         double weight;
//         int calori;
//     };

//     CandyBar snack = {"Mocha Munch", 2.3, 350};
//     cout << snack.name << endl;
//     cout << snack.weight << endl;
//     cout << snack.calori << endl;    
//     system("pause");
//     return 0;
// }

// 4.6
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
//     struct CandyBar
//     {
//         /* data */
//         string name;
//         double weight;
//         int calori;
//     };
//     CandyBar snackList[3];
//     snackList[0] = {"Mocha Munch", 2.3, 350};
//     snackList[1] = {"Mocha Munch1", 2.4, 360};
//     snackList[2] = {"Mocha Munch2", 2.5, 370};

//     cout << snackList[0].name << snackList[0].weight << snackList[0].calori << endl;
//     cout << snackList[1].name << snackList[1].weight << snackList[1].calori << endl;
//     cout << snackList[2].name << snackList[2].weight << snackList[2].calori << endl;


//     system("pause");
//     return 0;
// }

// 4.7
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;

//     struct Pissa
//     {
//         /* data */
//         string name;
//         double R;
//         double Weight;
//     };
    
//     Pissa good;
//     cout << "Please input the name, the radio and the weight of Pissa:" << endl;
//     getline(cin, good.name);
//     cin >> good.R;
//     cin >> good.Weight;

//     cout << "name: " << good.name << " Radio: " << good.R << " weight: " << good.Weight << endl;

//     system("pause");
//     return 0;
// }

// 4.8
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;

//      struct Pissa
//     {
//         /* data */
//         string name;
//         double R;
//         double Weight;
//     };

//     Pissa * p1 = new Pissa;
//     cout << "Please input the radio, the name and the weight of Pissa:" << endl;
//     cin >> p1->R;
//     // getline(cin, p1->name);
//     cin >> p1->name;
//     cin >> p1->Weight;
//     cout << "name: " << p1->name << " Radio: " << p1->R << " weight: " << p1->Weight << endl;
//     delete p1;

//     system("pause");
//     return 0;
// }

// 4.9
// #include <iostream>
// #include <string>

// int main(){
//     using namespace std;
//     struct CandyBar
//     {
//         /* data */
//         string name;
//         double weight;
//         int calori;
//     };
//     CandyBar * p1 = new CandyBar[3];
//     p1[0] = {"Mocha Munch", 2.3, 350};
//     p1[1] = {"Mocha Munch1", 2.4, 360};
//     p1[2] = {"Mocha Munch2", 2.5, 370};

//     cout << p1[0].name << p1[0].weight << p1[0].calori << endl;
//     cout << p1[1].name << p1[1].weight << p1[1].calori << endl;
//     cout << p1[2].name << p1[2].weight << p1[2].calori << endl;

//     delete [] p1;

//     system("pause");
//     return 0;
// }

// 4.10
// #include <iostream>
// #include <array>

// int main(){
//     using namespace std;

//     array<int, 3> grade;
//     cout << "Please enter three grades of running 40m:" << endl;
//     cin >> grade[0];
//     cin >> grade[1];
//     cin >> grade[2];
//     double med = (grade[0] + grade[1] + grade[2]) / 3.0;
//     cout << "1: " << grade[0] << " 2: " << grade[1] << " 3: " << grade[2] << endl;
//     cout << "pingjun: " << med << endl;
 
//     system("pause");
//     return 0;
// }