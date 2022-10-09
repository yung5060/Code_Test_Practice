#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    vector<bool> primes(n + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    int count = 0;
    for (const auto &prime : primes)
    {
        count += (prime) ? 1 : 0;
    }
    return count;
}

int main()
{
    cout << solution(10) << endl;
    cout << solution(5) << endl;
    cin.get();
}