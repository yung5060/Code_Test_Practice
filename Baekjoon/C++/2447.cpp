#include <iostream>

char solution(int a, int b)
{
    if (a % 3 == 1 && b % 3 == 1)
    {
        return ' ';
    }
    else if (a < 3 && b < 3)
    {
        return '*';
    }
    else
    {
        return solution(a / 3, b / 3);
    }
}

int main()
{
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << solution(i, j);
        }
        std::cout << std::endl;
    }
}