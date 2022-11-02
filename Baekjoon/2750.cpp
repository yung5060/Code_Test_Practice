#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int rep;
    std::cin >> rep;

    std::vector<int> tmp;
    for (int i = 0; i < rep; i++)
    {
        int n;
        std::cin >> n;
        tmp.push_back(n);
    }
    std::sort(tmp.begin(), tmp.end());
    for (const auto &n : tmp)
    {
        std::cout << n << std::endl;
    }
}