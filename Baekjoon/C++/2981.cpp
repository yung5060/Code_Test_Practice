#include <iostream>
#include <vector>
#include <algorithm>

int GCD(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return GCD(b, a % b);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, num;
    std::cin >> N;
    std::vector<int> nums;
    for (int i = 0; i < N; i++)
    {
        std::cin >> num;
        nums.push_back(num);
    }
    std::sort(nums.begin(), nums.end());
    int gcd = nums[1] - nums[0];
    for (int i = 2; i < N; i++)
    {
        gcd = GCD(gcd, nums[i] - nums[i - 1]);
    }
    std::vector<int> result;
    for (int i = 2; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            result.push_back(i);
            result.push_back(gcd / i);
        }
    }
    result.push_back(gcd);
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    for (const auto &it : result)
    {
        std::cout << it << ' ';
    }
}