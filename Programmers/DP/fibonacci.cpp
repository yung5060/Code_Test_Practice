#include <iostream>
#include <vector>

int solution(int n, std::vector<int> &memo)
{
    if (n <= memo.size() && n > 2)
    {
        return memo[n - 1];
    }
    if (n <= 2)
    {
        return 1;
    }
    memo.push_back(solution(n - 1, memo) + solution(n - 2, memo));
    return memo[n - 1];
}

int main()
{
    std::vector<int> memo(2, 1);
    std::cout << solution(1, memo) << std::endl;
    std::cout << solution(3, memo) << std::endl;
    std::cout << solution(5, memo) << std::endl;
    std::cout << solution(7, memo) << std::endl;
    std::cout << solution(10, memo) << std::endl;
    std::cout << solution(30, memo) << std::endl;
    std::cin.get();
}