#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

long long solution(int m, int n, std::unordered_map<std::string, long long> &memo)
{
    std::string key = "";
    key.push_back((char)m);
    key.push_back(',');
    key.push_back((char)n);
    if (memo.find(key) != memo.end())
    {
        return memo[key];
    }
    if (m == 1 && n == 1)
    {
        return 1;
    }
    if (m == 0 || n == 0)
    {
        return 0;
    }
    memo[key] = solution(m - 1, n, memo) + solution(m, n - 1, memo);
    return memo[key];
}

int main()
{
    std::unordered_map<std::string, long long> memo;
    std::cout << solution(1, 1, memo) << std::endl;
    std::cout << solution(2, 3, memo) << std::endl;
    std::cout << solution(3, 2, memo) << std::endl;
    std::cout << solution(3, 3, memo) << std::endl;
    std::cout << solution(18, 18, memo) << std::endl;
    std::cin.get();
}