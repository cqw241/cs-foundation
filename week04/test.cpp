#include <iostream>
// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;

int sum_odd(int n)
{
    if (n <= 0)
        return 0;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
            sum += i;
    }
    return sum;
}

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int count_primes(int left, int right)
{
    int count = 0;
    if (right < 2)
        return 0;
    for (int i = left; i <= right; i++)
    {
        if (is_prime(i))
            count++;
    }
    return count;
}
int main()
{
    int num, left, right;
    cin >> num;
    cout << "奇数和=" << sum_odd(num) << endl;
    cout << "输入左端点：";
    cin >> left;
    cout << "输入右端点：";
    cin >> right;
    cout << "[" << left << "," << right << "] 区间的素数个数：" << count_primes(left, right) << endl;
    return 0;
}