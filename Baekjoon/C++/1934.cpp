#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, a, b;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        int max = std::max(a, b), min = std::min(a, b);
        int tmp = max;
        while (tmp % min != 0)
        {
            tmp++;
        }
        while (tmp % max != 0)
        {
            tmp += min;
        }
        std::cout << tmp << '\n';
    }
}