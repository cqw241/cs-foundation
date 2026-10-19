#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int num;
    cout << "输入数字：" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "查看个人信息" << endl;
        break;
    case 2:
        cout << "修改密码" << endl;
        break;
    case 3:
        cout << "查看帮助" << endl;
        break;
    case 0:
        cout << "退出程序" << endl;
        break;
    default:
        cout << "无效选择" << endl;
    }

    return 0;
}