#include <iostream>
#include <vector>

int main()
{
    int x, y;
    std::vector<int> x_list, y_list;
    for (int i = 0; i < 2; i++)
    {
        std::cin >> x >> y;
        x_list.push_back(x);
        y_list.push_back(y);
    }
    std::cin >> x >> y;
    if (x_list[0] == x_list[1])
    {
        std::cout << x << " ";
    }
    else
    {
        for (const auto &it : x_list)
        {
            if (x != it)
            {
                std::cout << it << " ";
            }
        }
    }
    if (y_list[0] == y_list[1])
    {
        std::cout << y << " ";
    }
    else
    {
        for (const auto &it : y_list)
        {
            if (y != it)
            {
                std::cout << it << " ";
            }
        }
    }
}