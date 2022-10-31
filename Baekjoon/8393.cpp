#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int answer = 0;
    for (int i = 1; i <= num; i++)
    {
        answer += i;
    }

    std::cout << answer;
}