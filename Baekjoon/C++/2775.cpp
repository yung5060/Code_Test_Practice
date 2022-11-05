#include <iostream>

int solution(int a, int b)
{
    if (b == 1)
    {
        return 1;
    }
    if (a == 0)
    {
        return b;
    }
    return solution(a - 1, b) + solution(a, b - 1);
}

int main()
{
    int rep, a, b;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        std::cin >> a;
        std::cin >> b;
        std::cout << solution(a, b) << std::endl;
    }
}