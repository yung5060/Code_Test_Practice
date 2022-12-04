#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    while (a != 0 && b != 0)
    {
        if (b % a == 0)
        {
            std::cout << "factor\n";
        }
        else if (a % b == 0)
        {
            std::cout << "multiple\n";
        }
        else
        {
            std::cout << "neither\n";
        }
        std::cin >> a >> b;
    }
}