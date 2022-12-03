#include <iostream>
#include <cmath>

int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    int x1, y1, r1, x2, y2, r2;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double distance = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

        if (distance == 0 && r1 == r2)
        {
            std::cout << -1 << '\n';
        }
        else if (r1 + r2 == distance || std::abs(r1 - r2) == distance)
        {
            std::cout << 1 << '\n';
        }
        else if (std::abs(r1 - r2) < distance && distance < r1 + r2)
        {
            std::cout << 2 << '\n';
        }
        else
        {
            std::cout << 0 << '\n';
        }
    }
}