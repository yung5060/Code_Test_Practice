#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> primes(123456 * 2 + 1, true);
    primes[0] = false, primes[1] = false;

    for (int i = 2; i * i < 123456 * 2; i++)
    {
        if (primes[i])
        {
            for (int j = 2 * i; j <= 123456 * 2; j += i)
            {
                primes[j] = false;
            }
        }
    }

    int num;
    std::cin >> num;
    while (num != 0)
    {
        int cnt = 0;
        for (int i = num + 1; i <= 2 * num; i++)
        {
            if (primes[i])
            {
                cnt++;
            }
        }
        std::cout << cnt << std::endl;
        std::cin >> num;
    }
}