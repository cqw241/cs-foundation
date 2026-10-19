#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::sort;
using std::string;
using std::vector;

int main()
{
    cout << "for循环：";
    for (int i = 2; i <= 20; i += 2)
    {
        cout << i << " ";
    }
    cout << "\n while循环：";
    int i = 2;
    while (i <= 20)
    {
        cout << i << " ";
        i += 2;
    }
    cout << "\n 嵌套循环：\n";
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "*" << j << "=" << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}