#include <iostream>

void solution(int i, int j, int N)
{
    if ((i / N) % 3 == 1 && (j / N) % 3 == 1)
    {
        std::cout << ' ';
    }
    else
    {
        if (N / 3 == 0)
        {
            std::cout << '*';
        }
        else
        {
            solution(i, j, N / 3);
        }
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
            solution(i, j, N);
        }
        std::cout << std::endl;
    }
}