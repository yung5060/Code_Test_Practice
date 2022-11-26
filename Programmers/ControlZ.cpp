#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int solution(std::string s)
{
    std::stringstream ss(s);
    std::string tmp;
    std::vector<int> stack;
    while (std::getline(ss, tmp, ' '))
    {
        if (tmp == "Z")
        {
            stack.pop_back();
        }
        else
        {
            stack.push_back(std::stoi(tmp));
        }
    }
    int answer = 0;
    for (const auto &it : stack)
    {
        answer += it;
    }
    return answer;
}

int main()
{
    std::cout << solution("1 2 Z 3") << std::endl;
    std::cout << solution("10 20 30 40") << std::endl;
    std::cout << solution("10 Z 20 Z 1") << std::endl;
}