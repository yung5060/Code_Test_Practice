#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b;
    std::cin >> c;

    int tmp = b + c;
    int hour = a + tmp / 60;
    int minutes = tmp % 60;

    std::cout << hour % 24 << " " << minutes;
}