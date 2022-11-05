#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (b >= 45)
    {
        std::cout << a << " " << b - 45;
    }
    else
    {
        if (a == 0)
        {
            std::cout << 23 << " " << 60 - (45 - b);
        }
        else
        {
            std::cout << a - 1 << " " << 60 - (45 - b);
        }
    }
}