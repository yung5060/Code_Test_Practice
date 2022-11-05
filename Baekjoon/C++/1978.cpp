#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<bool> primes(1001, false);
    primes[0] = true, primes[1] = true;
    for (int i = 2; i < std::sqrt(1001); i++)
    {
        if (!primes[i])
        {
            for (int j = 2 * i; j < 1001; j += i)
            {
                primes[j] = true;
            }
        }
    }

    int rep, cnt = 0;
    std::cin >> rep;
    for (int i = 0; i < rep; i++)
    {
        int tmp;
        std::cin >> tmp;
        if (!primes[tmp])
        {
            cnt++;
        }
    }
    std::cout << cnt;
}