#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int i = 3;
    vector<int> primes = {2};
    while (i <= n)
    {
        int count = 0;
        for (auto &prime : primes)
        {
            if (!(i % prime))
            {
                count++;
                break;
            }
        }
        if (count)
        {
            i += 2;
        }
        else
        {
            primes.push_back(i);
            i += 2;
        }
    }
    return primes.size();
}

int main()
{
    cout << solution(10) << endl;
    cout << solution(5) << endl;
    cin.get();
}