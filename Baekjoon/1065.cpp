#include <iostream>
#include <string>

int main()
{
    int max;
    std::cin >> max;

    int count = 0;
    for (int i = 1; i <= max; i++)
    {
        std::string num = std::to_string(i);
        if (num.size() <= 2)
        {
            count++;
            continue;
        }
        if ((num.front() + num.back()) == num[1] * 2)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}