#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string word;
    std::cin >> word;

    for (int i = 0; i < 26; i++)
    {
        int index = std::find(word.begin(), word.end(), 'a' + i) - word.begin();
        if (index == word.size())
        {
            std::cout << -1 << " ";
        }
        else
        {
            std::cout << index << " ";
        }
    }
}