#include <iostream>

int solution(int num)
{
    int count = 0;

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else if (num % 2 == 1)
        {
            num = num * 3 + 1;
        }
        count++;

        if (count > 500)
        {
            return -1;
        }
    }
    return count;
}

int main()
{
    std::cout << solution(626331) << std::endl;
    // std::cout << solution(6) << std::endl;
    // std::cout << solution(16) << std::endl;
    std::cin.get();
}