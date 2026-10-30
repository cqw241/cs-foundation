#include <iostream>
#include <string>
// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string text;
    cin >> text;
    int a_count = 0;
    for (size_t i = 0; i < text.size(); i++)
    {

        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] - 'A' + 'a';
        }
        if (text[i] == 'a')
        {
            a_count++;
        }
    }
    cout << a_count << endl;
    cout << text << endl;
    return 0;
}