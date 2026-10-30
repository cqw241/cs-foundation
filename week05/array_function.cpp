#include <iostream>
int sum_array(const int arr[], int len)
{
    // 1. 定义累加变量
    int sum = 0;
    // 2. 使用 for 遍历数组
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];

        // 3. 累加每个元素
    }
    return sum; // 4. 返回总和
}
int find_max(const int arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int find_min(const int arr[], int len)
{
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
double average_array(const int arr[], int len)
{
    double average = sum_array(arr, len) / static_cast<double>(len);
    return average;
}
int main()
{
    int arr[5] = {-8, -3, -12, -5, -9};

    int len = sizeof(arr) / sizeof(arr[0]);
    int max = find_max(arr, len);
    int min = find_min(arr, len);
    double average = average_array(arr, len);
    std::cout << sum_array(arr, len) << "\n";
    std::cout << max << "\n";
    std::cout << min << "\n";
    std::cout << average << "\n";

    return 0;
}