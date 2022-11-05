#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string text;
    std::cin >> text;

    std::vector dial = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

    int time = 0;
    for (const auto &it : text)
    {
        int index = it - 65;
        time += dial[index];
    }
    std::cout << time;
}
