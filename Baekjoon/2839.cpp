#include <iostream>

int main()
{
    int kilo;
    std::cin >> kilo;

    int cnt = 0;
    while (kilo % 5 != 0)
    {
        if (kilo < 5)
        {
            break;
        }
        kilo -= 3;
        cnt++;
    }
    if (kilo < 5)
    {
        if (kilo == 3)
        {
            cnt++;
        }
        else
        {
            std::cout << -1;
            return 0;
        }
    }
    std::cout << cnt + kilo / 5;
}