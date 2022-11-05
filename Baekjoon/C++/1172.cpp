#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (c <= b)
    {
        std::cout << -1;
    }
    else
    {
        int x = a / (c - b) + 1;
        std::cout << x;
    }
}