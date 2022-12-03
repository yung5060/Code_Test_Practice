#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;
    while (a != 0 || b != 0 || c != 0)
    {
        std::vector<int> triangle = {a, b, c};
        std::sort(triangle.begin(), triangle.end());
        if (triangle[2] * triangle[2] == triangle[0] * triangle[0] + triangle[1] * triangle[1])
        {
            std::cout << "right\n";
        }
        else
        {
            std::cout << "wrong\n";
        }
        std::cin >> a >> b >> c;
    }
}