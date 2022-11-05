#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int N, num = 2;
    std::cin >> N;

    while (true)
    {
        if (N == 1)
        {
            break;
        }
        if (N % num == 0)
        {
            std::cout << num << std::endl;
            N /= num;
        }
        else
        {
            num++;
        }
    }
}

// int main()
// {
//     int N;
//     std::cin >> N;

//     std::vector<bool> primes(N + 1, false);
//     primes[0] = true, primes[1] = true;

//     for (int i = 2; i < std::sqrt(N); i++)
//     {
//         if (!primes[i])
//         {
//             for (int j = 2 * i; j <= N; j += i)
//             {
//                 primes[j] = true;
//             }
//         }
//     }
//     int k = 2;
//     while (k <= N)
//     {
//         if (!primes[k])
//         {
//             if (N % k == 0)
//             {
//                 std::cout << k << std::endl;
//                 N /= k;
//                 continue;
//             }
//         }
//         k++;
//     }
// }