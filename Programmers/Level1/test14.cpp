#include <iostream>
#include <vector>
#include <string>

std::string solution(std::vector<std::string> seoul)
{
    std::vector<std::string>::iterator it;
    int index = 0;
    for (it = seoul.begin(); it != seoul.end(); it++)
    {
        if (*it == "Kim")
        {
            index = it - seoul.begin();
            break;
        }
    }
    return "�輭���� " + std::to_string(index) + "�� �ִ�";
}

int main()
{
    std::vector<std::string> seoul = {"Jane", "Kim"};
    std::cout << solution(seoul) << std::endl;
    std::cin.get();
}