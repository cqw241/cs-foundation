#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void print_matrix(const int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int scores[3][3] = {
        {85, 90, 78}, {92, 88, 81}, {76, 95, 89}};
    print_matrix(scores, 3);

    cout << "---------------------------------" << endl;

    scores[1][2] = 100;
    print_matrix(scores, 1);
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / 3;
        cout << "student" << i + 1 << ": sum=" << sum << ", average=" << average << '\n';
    }
    return 0;
}