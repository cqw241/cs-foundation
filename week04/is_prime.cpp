#include <iostream>

bool is_prime(int n)
{
    // TODO 1:
    // 如果 n < 2，返回 false
    if (n < 2)
        return false;
    // TODO 2:
    // 使用 for 循环检查 2 到 n-1
    // 如果 n 能被某个 i 整除，返回 false
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    // TODO 3:
    // 如果全部检查完毕都没找到因数
    // 返回 true
    return true;
}

int main()
{
    int n;
    std::cin >> n;

    if (is_prime(n))
        std::cout << "Prime\n";
    else
        std::cout << "Not prime\n";

    return 0;
}