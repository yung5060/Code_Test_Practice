#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int M, N;
    std::cin >> M;
    std::cin >> N;

    std::vector<bool> primes(N + 1, false);
    primes[0] = true, primes[1] = true;
    for (int i = 2; i < std::sqrt(N); i++)
    {
        if (!primes[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                primes[j] = true;
            }
        }
    }
    int tmp = 0, min = 0;
    for (int i = N; i >= M; i--)
    {
        if (!primes[i])
        {
            tmp += i;
            min = i;
        }
    }
    if (tmp != 0)
    {
        std::cout << tmp << std::endl;
    }
    else
    {
        std::cout << -1;
    }

    if (min != 0)
    {
        std::cout << min;
    }
}