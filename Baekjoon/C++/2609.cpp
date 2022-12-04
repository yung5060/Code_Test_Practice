#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    int lcm = std::max(a, b);
    int gcd = std::min(a, b);
    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }
    while (a % gcd != 0 || b % gcd != 0)
    {
        gcd--;
    }
    std::cout << gcd << '\n'
              << lcm;
}