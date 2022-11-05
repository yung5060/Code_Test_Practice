#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> primes(10001, true);
    primes[0] = false, primes[1] = false;
    for (int i = 2; i * i < 10000; i++)
    {
        if (primes[i])
        {
            for (int j = 2 * i; j <= 10000; j += i)
            {
                primes[j] = false;
            }
        }
    }

    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int n;
        std::cin >> n;
        int k = n / 2;
        while (true)
        {
            if (primes[k])
            {
                if (primes[n - k])
                {
                    std::cout << k << " " << n - k << std::endl;
                    break;
                }
            }
            k--;
        }
    }
}