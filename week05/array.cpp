#include <iostream>
// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    arr[2] = 100;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    // 计算修改后数组中所有元素的总和。
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    // 计算修改后数组中所有元素的平均值。
    double average = static_cast<double>(sum) / len;
    cout << "\nsum=" << sum << endl;
    cout << "average=" << average << endl;
    //     找出数组的最大值
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    // 找出数组的最小值
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "max=" << max << "\nmin=" << min << endl;
    return 0;
}