#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    cout << "输入数字：" << endl;
    cin >> num;
    if (num >= 10 && num <= 99)
    {
        cout << "是两位正整数" << endl;
    }
    else
    {
        cout << "不是两位正整数" << endl;
    }
    return 0;
}