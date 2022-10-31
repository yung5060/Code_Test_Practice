#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int main()
{
    int num1;
    std::string num2;
    std::cin >> num1;
    std::cin >> num2;

    int num3 = 0;
    int i = 0;
    std::reverse(num2.begin(), num2.end());
    for (auto &chr : num2)
    {
        std::cout << num1 * (chr - 48) << std::endl;
        num3 += (chr - 48) * pow(10, i);
        i++;
    }
    std::cout << num1 * num3 << std::endl;
}