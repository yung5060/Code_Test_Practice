#include <iostream>
#include <vector>
#include <unordered_map>

bool canSum(int targetNum, std::vector<int> &list, std::unordered_map<int, bool> &memo)
{
    if (memo.find(targetNum) != memo.end())
    {
        return memo.at(targetNum);
    }
    if (targetNum == 0)
        return true;
    if (targetNum < 0)
        return false;
    for (int &num : list)
    {
        int remainder = targetNum - num;
        if (canSum(remainder, list, memo))
        {
            memo.insert({targetNum, true});
            return true;
        }
    }
    memo.insert({targetNum, false});
    return false;
}

int main()
{
    std::unordered_map<int, bool> memo;
    std::vector<int> list1 = {2, 3}, list2 = {5, 3, 4, 7}, list3 = {2, 4}, list4 = {2, 3, 5}, list5 = {7, 14};
    std::cout << canSum(7, list1, memo = {}) << std::endl;
    std::cout << canSum(7, list2, memo = {}) << std::endl;
    std::cout << canSum(7, list3, memo = {}) << std::endl;
    std::cout << canSum(8, list4, memo = {}) << std::endl;
    std::cout << canSum(300, list5, memo = {}) << std::endl;
    std::cin.get();
}