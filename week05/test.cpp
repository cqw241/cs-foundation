#include <iostream>
using std::cout;
using std::endl;

int find_max(const int arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {3, 10, 9, 6, 32, 77, -7};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << find_max(arr, len) << endl;
    return 0;
}