#include <iostream>
#include <vector>

std::vector<int> chess = {1, 1, 2, 2, 2, 8};

int main()
{
    std::vector<int> tmp;
    for (int i = 0; i < 6; i++)
    {
        int current;
        std::cin >> current;
        tmp.push_back(current);
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << chess[i] - tmp[i] << " ";
    }
}