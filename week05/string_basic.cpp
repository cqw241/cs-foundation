#include <iostream>
#include <string>

// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char word[] = "cat";
    cout << word << ":" << sizeof(word) << endl;
    string test = "cat";
    cout << test << ":" << test.size() << endl;
    test[1] = 'u';
    cout << test << endl;
    return 0;
}