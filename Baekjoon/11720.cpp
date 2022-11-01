#include <iostream>
#include <string>

int main()
{
    int rep;
    std::cin >> rep;

    std::string num;
    std::cin >> num;

    int total = 0;
    for (const auto &it : num)
    {
        total += it - 48;
    }

    std::cout << total << std::endl;
}