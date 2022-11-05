#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int> tmp;
    for (int i = 0; i < 5; i++)
    {
        int n;
        std::cin >> n;
        tmp.push_back(n);
    }
    std::sort(tmp.begin(), tmp.end());
    std::cout << std::accumulate(tmp.begin(), tmp.end(), 0) / 5 << std::endl;
    std::cout << tmp[2] << std::endl;
}