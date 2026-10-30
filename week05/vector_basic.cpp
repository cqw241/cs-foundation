#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 仅引入新手最常用的组件
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> scores = {80, 90, 70};
    scores.push_back(95);
    scores.push_back(85);
    int sum = 0;

    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores[i] << " ";
        sum += scores[i];
    }
    double average = static_cast<double>(sum) / scores.size();
    cout << "\nsum=" << sum << "\naverage=" << average << endl;

    std::vector<int> v = {10, 20, 30};

    std::cout << v.size() << " "
              << v.capacity() << '\n';

    v.reserve(10);

    std::cout << v.size() << " "
              << v.capacity() << '\n';

    v.push_back(40);

    std::cout << v.size() << " "
              << v.capacity() << '\n';
    return 0;
}