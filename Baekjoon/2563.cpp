#include <iostream>
#include <vector>

int main()
{
    int rep;
    std::cin >> rep;

    std::vector<std::vector<bool>> black_paper(100, std::vector(100, false));

    for (int i = 0; i < rep; i++)
    {
        int a, b;
        std::cin >> a >> b;
        for (int j = a; j < a + 10; j++)
        {
            for (int k = b; k < b + 10; k++)
            {
                black_paper[j][k] = true;
            }
        }
    }
    int total = 0;
    for (const auto &line : black_paper)
    {
        for (const auto &cell : line)
        {
            if (cell)
            {
                total++;
            }
        }
    }
    std::cout << total;
}