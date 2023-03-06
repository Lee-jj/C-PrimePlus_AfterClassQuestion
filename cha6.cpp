/*** 6.10 复习题
1. 每次执行while循环，格式二只需要判断条件一次，而格式一可能需要判断条件两次
2. 输出的是对应字母的ASCII码加1所表示的int类型的数字
3. H$i$!$(换行)$S$e$n$d$ $ct1 = 9, ct2 = 9
4. weight < 125 && weight >= 115; 
ch == 'q' || ch == 'Q'; 
x != 26 && x % 2 == 0; 
x % 2 == 0 && x % 26 != 0;
(donation >= 1000 && donation <= 2000) || guest == 1;
#include <cctype> islower(ch); isupper(ch);
5. 相同                                                          -----> 当x是bool类型时相同，其他类型时可能不同
6. x >= 0 ? x : -x;
7. switch(ch){
    case 'A':
        a_grade ++;
        break;
    case 'B':
        b_grade ++;
        break;
    case 'C':
        c_grade ++;
        break;
    case 'D':
        d_grade ++;
        break;
    default:
        f_grade ++;
}
8. 含义更加明确？？？     -----> 使用数字作为case标签，只有用户输入数字时才有效，输入非整型类型会导致程序被挂起，而使用字符作为case标签，输入错误类型时会通过default告知用户输入错误
9. int line = 0;
char ch;
while ((ch = cin.get()) != 'Q'){
    if (ch == '\n')
        line ++;
}
*/

/*** 6.11 编程练习 ***/
// 1.
// #include <iostream>
// #include <cctype>

// int main(){
//     using namespace std;
//     char ch;
//     while ((ch = cin.get()) != '@'){
//         if (isdigit(ch))
//             continue;
//         if (isupper(ch))
//             cout << char(tolower(ch));
//         else if (islower(ch))
//             cout << char(toupper(ch));
//         else
//             cout << ch;
//     }
//     system("pause");
//     return 0;
// }

// 2.
// #include <iostream>
// const int MAX = 10;
// int main(){
//     using namespace std;
//     double nums[MAX];
//     double Sum = 0.0;
//     int cnt = 0;
//     for (int i=0; i<MAX; ++i){
//         cin >> nums[i];
//         if (cin.fail())
//             break;
//         Sum += nums[i];
//         cnt ++;
//     }
//     cout << "average: " << Sum / cnt << endl;
//     int res = 0;
//     for (int i=0; i<cnt; ++i){
//         if (nums[i] > Sum/cnt){
//             res ++;
//         }
//     }
//     cout << "have " << res << " over than average.\n";
//     system("pause");
//     return 0;
// }

// 3.
// #include <iostream>
// int main(){
//     using namespace std;
//     cout << "Please enter one of the following choices:\n";
//     cout << "c) carnivore\tp) pianist\nt) tree\t\tg) game\n";
//     char ch;
//     while (cin >> ch){
//         if (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g'){
//             cout << "Please enter a c, p, t or g: ";
//             continue;
//         }
            
//         switch (ch)
//         {
//         case 'c':
//             cout << "carnivore" << endl;
//             break;
//         case 'p':
//             cout << "pianist" << endl;
//             break;
//         case 't':
//             cout << "tree" << endl;
//             break;
//         case 'g':
//             cout << "game" << endl;
//             break;
//         }
//         break;
//     }
//     system("pause");
//     return 0;
// }

// 4.
// #include <iostream>
// const int STRSIZE = 30;
// struct bop
// {
//     /* data */
//     char fullname[STRSIZE];
//     char title[STRSIZE];
//     char bopname[STRSIZE];
//     int prference;
// };

// int main(){
//     using namespace std;
//     cout << "Please enter one of the following choices:\n";
//     cout << "a. display by name\tb. display by title\nc. display by bopname\td. display by preference\nq. quit\n";
//     char ch;
//     bop test1[5] = {{"Wimp Macho", "UK1", "UK2", 0},
//                     {"Raki Rhodes", "Junior Programmer", "UK3", 1},
//                     {"Celia Laiter", "UK4", "MIPS", 2},
//                     {"Hoppy Hipman", "Analyst Trainee", "UK5", 1},
//                     {"Pat Hand", "UK6", "LOOPY", 2}};
//     cout << "Enter your choice: ";
//     while (cin >> ch){
//         if (ch == 'q')
//             break;
//         else if (ch == 'a')
//             for (int i=0; i<5; ++i)
//                 cout << test1[i].fullname << endl;
//         else if (ch == 'b')
//             for (int i=0; i<5; ++i)
//                 cout << test1[i].title << endl;
//         else if (ch == 'c')
//             for (int i=0; i<5; ++i)
//                 cout << test1[i].bopname << endl;
//         else if (ch == 'd')
//             for (int i=0; i<5; ++i){
//                 int temp = test1[i].prference;
//                 switch (temp)
//                 {
//                 case 0:
//                     cout << test1[i].fullname << endl;
//                     break;
//                 case 1:
//                     cout << test1[i].title << endl;
//                     break;
//                 case 2:
//                     cout << test1[i].bopname << endl;
//                     break;
//                 default:
//                     break;
//                 }
//             }
//         else{
//             cout << "please choose from a b c d and q: ";
//             continue;
//         }           
//     }
//     cout << "bye!" << endl;
//     system("pause");
//     return 0;
// }

// 5.
// #include <iostream>

// int main(){
//     using namespace std;
//     while (1){
//         cout << "please enter your income: ";
//         double income;
//         cin >> income;
//         if (cin.fail() || income < 0)
//             break;
//         double res = 0.0;
//         if (income <= 5000)
//             res += 0.0;
//         else if (income <= 15000 && income > 5000)
//             res += (income - 5000) * 0.1;
//         else if (income <= 35000 && income > 15000)
//             res += (income - 15000) * 0.15 + 10000 * 0.1;
//         else
//             res += (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
//         cout << "sui: " << res << endl;
//     }
//     system("pause");
//     return 0;
// }

// 6.
// #include <iostream>
// #include <string>
// #include <vector>
// struct contibuter
// {
//     /* data */
//     std::string name;
//     double money; 
// };

// int main(){
//     using namespace std;
//     vector<contibuter> people;
//     while (1){
//         cout << "please enter the name of contributer(enter 'end' to stop): ";
//         string tempName;
//         getline(cin, tempName);
//         if (tempName == "end")
//             break;
//         cout << "please enter the money of contributer: ";
//         double tempMoney;
//         (cin >> tempMoney).get();
//         people.push_back({tempName, tempMoney});
//     }
//     vector<int> grand;
//     vector<int> noGrand;
//     for (int i=0; i<people.size(); ++i){
//         if (people[i].money > 10000)
//             grand.push_back(i);
//         else
//             noGrand.push_back(i);
//     }
//     cout << "Grand Patrons" << endl;
//     if (grand.size() == 0)
//         cout << "none" << endl;
//     else
//         for (int i=0; i<grand.size(); ++i)
//             cout << people[grand[i]].name << " " << people[grand[i]].money << endl;
//     cout << "Patrons" << endl;
//     if (noGrand.size() == 0)
//         cout << "none" << endl;
//     else
//         for (int i=0; i<noGrand.size(); ++i)
//             cout << people[noGrand[i]].name << " " << people[noGrand[i]].money << endl;
        
//     system("pause");
//     return 0;
// }

// 7.
// #include <iostream>
// #include <string>
// int main(){
//     using namespace std;
//     int cntVowels = 0;
//     int cntCons = 0;
//     int cntOthers = 0;
//     cout << "Enter words (q to quit): " << endl;
//     string word;
//     cin >> word;
//     while (word != "q"){
//         if (isalpha(word[0])){
//             switch (word[0]){
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     cntVowels ++;
//                     break;                
//                 default:
//                     cntCons ++;
//                     break;
//             }
//         }
//         else
//             cntOthers ++;
//         cin >> word;
//     }
//     cout << cntVowels << " words beginning with vowels." << endl;
//     cout << cntCons << " words beginning with consonats" << endl;
//     cout << cntOthers << " others" << endl;
//     system("pause");
//     return 0;
// }

// 8.
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cstdlib>

// int main(){
//     using namespace std;
//     string fileName = "cha6.txt";
//     ifstream inFile;
//     inFile.open(fileName);
//     if (!inFile.is_open()){
//         cout << "could not open the file " << fileName << endl;
//         cout << "Program terminating.\n";
//         system("pause");
//         exit(EXIT_FAILURE);
//     }

//     char ch;
//     int cnt = 0;
//     inFile.get(ch);
//     while (inFile.good()){
//         if (ch != '\n')
//             ++ cnt;
//         inFile.get(ch);
//     }
//     if (inFile.eof())
//         cout << "end of file reached.\n";
//     else if (inFile.fail())
//         cout << "Input terminated by data mismatch.\n";
//     cout << "total chars: " << cnt << endl;
//     system("pause");
//     return 0;
// }

// 9.
// #include <iostream>
// #include <string>
// #include <vector>
// #include <fstream>

// struct people
// {
//     std::string name;
//     double money;
// };

// int main(){
//     using namespace std;
//     vector<people> contributer;
//     ifstream inFile;
//     string fileName = "cha6.txt";
//     inFile.open(fileName);
//     if (!inFile.is_open()){
//         cout << "could not open the file " << fileName << endl;
//         cout << "Program terminating.\n";
//         system("pause");
//         exit(EXIT_FAILURE);
//     }

//     int cnt;
//     vector<int> grand;
//     vector<int> noGrand;

//     (inFile >> cnt).get();
//     for (int i=0; i<cnt; ++i){
//         string tempName;
//         getline(inFile, tempName);
//         double tempMoney;
//         (inFile >> tempMoney).get();
//         if (tempMoney > 10000)
//             grand.push_back(i);
//         else
//             noGrand.push_back(i);
//         contributer.push_back({tempName, tempMoney});
//     }
//     cout << "Grand Patrons:" << endl;
//     if (grand.size() == 0)
//         cout << "none" << endl;
//     else
//         for (int i=0; i<grand.size(); ++i)
//             cout << contributer[grand[i]].name << " " << contributer[grand[i]].money << endl;
//     cout << "Patrons:" << endl;
//     if (noGrand.size() == 0)
//         cout << "none" << endl;
//     else
//         for (int i=0; i<noGrand.size(); ++i)
//             cout << contributer[noGrand[i]].name << " " << contributer[noGrand[i]].money << endl;
//     system("pause");
//     return 0;
// }