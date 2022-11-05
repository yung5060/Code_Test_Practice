#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    if (num1 > 0 && num2 > 0)
    {
        std::cout << 1;
    }
    else if (num1 > 0 && num2 < 0)
    {
        std::cout << 4;
    }
    else if (num1 < 0 && num2 > 0)
    {
        std::cout << 2;
    }
    else
    {
        std::cout << 3;
    }
}