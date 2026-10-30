#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void count_letters(const string &text, size_t freq[26])
{
    for (size_t i = 0; i < text.size(); i++)
    {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += ('a' - 'A');
        }
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
    }
}
int main()
{
    string text;
    getline(cin, text);
    size_t freq[26] = {};
    count_letters(text, freq);
    for (size_t i = 0; i < 26; i++)
    {
        cout << static_cast<char>('a' + i) << ":" << freq[i] << endl;
    }
    return 0;
}