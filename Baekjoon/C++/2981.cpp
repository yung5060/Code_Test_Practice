#include <iostream>
#include <vector>
#include <cmath>

bool check(const std::vector<int> &num_list, int n)
{
    int remainder = num_list.front() % n;
    for (const auto &it : num_list)
    {
        if (remainder != it % n)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, tmp, n = 2, m = 1000000000;
    std::vector<int> nums;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        m = std::min(m, tmp);
        nums.push_back(tmp);
    }
    while (n < m)
    {
        if (check(nums, n))
        {
            std::cout << n << ' ';
        }
        n++;
    }
}