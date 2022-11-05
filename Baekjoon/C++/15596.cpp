#include <iostream>
#include <vector>
#include <numeric>

long long sum(std::vector<int> &a)
{
    return std::accumulate(a.begin(), a.end(), 0LL);
}

int main()
{
    std::vector<int> tmp = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << sum(tmp) << std::endl;
    std::cin.get();
}