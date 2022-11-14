#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<int> arr(N, 0);
    for (int i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }
    int blackJack = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int tmp = arr[i] + arr[j] + arr[k];
                if (tmp > blackJack && tmp <= M)
                {
                    blackJack = tmp;
                }
            }
        }
    }
    std::cout << blackJack << std::endl;
}