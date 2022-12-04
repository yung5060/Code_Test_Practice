#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num, tmp, max = 1, min = 1000;
    std::cin >> num;
    for (int i = 0; i < num; i++)
    {
        std::cin >> tmp;
        max = std::max(max, tmp);
        min = std::min(min, tmp);
    }
    std::cout << max * min;
}