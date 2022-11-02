#include <iostream>
#include <string>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int size;
        std::string text, tmp;
        std::cin >> size >> text;

        for (const auto &it : text)
        {
            for (int j = 0; j < size; j++)
            {
                tmp.push_back(it);
            }
        }
        std::cout << tmp << std::endl;
    }
}