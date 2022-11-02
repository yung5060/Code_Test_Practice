#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int min, max;
    cin >> min;
    cin >> max;
    std::vector<bool> prime(max + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= sqrt(max); i++)
        if (prime[i] == true)
            for (int j = i * 2; j <= max; j += i)
                prime[j] = false;

    for (int i = min; i <= max; i++)
        if (prime[i] == true)
            cout << i << "\n";
    return 0;
}