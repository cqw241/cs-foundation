#include <iostream>
int increase(int n)
{
    // TODO 1: 定义局部变量 step = 3
    int step = 3;
    // TODO 2: 将 n 增加 step
    n += step;
    // TODO 3: 返回 n
    return n;
}
int main()
{
    int x = 10;
    // TODO 4: 调用 increase(x)
    // 将返回值保存到 result
    int result = increase(x);
    std::cout << x << '\n';
    std::cout << result << '\n';
    {
        int x = 100;
        std::cout << x << '\n';
    }
    return 0;
}