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
    int year;
    cout << "输入年份：";
    cin >> year;
    if (year > 0)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout << "闰年" << endl;
        }
        else
        {
            cout << "平年" << endl;
        }
    }
    else
    {
        cout << "无效年份" << endl;
    }
    return 0;
}