#include <iostream>

int main()
{
    int tmp;
    std::cin >> tmp;

    for (int i = 1; i < 10; i++)
    {
        std::cout << tmp << " * " << i << " = " << tmp * i << std::endl;
    }
}